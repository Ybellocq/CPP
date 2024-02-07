#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw() {
  return "Form Grade Too High";
}
const char*	Form::GradeTooLowException::what() const throw() {
  return "Form Grade Too Low";
}
const std::string& Form::getName() const {
  return _name;
}
const int& Form::getGrade() const {
  return _grade;
}
const int& Form::getExec() const {
  return _exec;
}
bool Form::getSign() const {
  return _sign;
}
void Form::beSigned(const Bureaucrat& b) {
  if (b.getGrade() > _grade)
    throw GradeTooLowException();
  _sign = true;
}
Form& Form::operator=(const Form& f) {
  if (this != &f) {
    *(const_cast<std::string*>(&_name)) = f.getName();
    *(const_cast<int*>(&_grade)) = f.getGrade();
    *(const_cast<int*>(&_exec)) = f.getExec();
    *(const_cast<bool*>(&_sign)) = f.getSign();
  }
  return *this;
}
Form::Form() : _name("default"), _grade(150), _exec(150), _sign(false){
    std::cout << "constructor called" << std::endl;
}

Form::Form(const std::string& name, const int& grade, const int& exec) : _name(name), _grade(grade), _exec(exec), _sign(false) {
  _sign = false;  
  if (_grade < GRADE_MAX)
    throw GradeTooHighException();
  if (_grade > GRADE_MIN)
    throw GradeTooLowException();
}

Form::Form(const Form& f) : _name(f.getName()), _grade(f.getGrade()), _exec(f.getExec()), _sign(f.getSign()) {
  if (_grade < GRADE_MAX)
    throw GradeTooHighException();
  if (_grade > GRADE_MIN)
    throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& f) {
  o << "Form: " << f.getName() << " Grade: " << f.getGrade() << " Exec: " << f.getExec() << " Sign: " << f.getSign();
  return o;
}

Form::~Form(void) {
    std::cout << "destructor called" << std::endl;
}