#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
  return "Form Grade Too High";
}

const char*	AForm::GradeTooLowException::what() const throw() {
  return "Form Grade Too Low";
}

const std::string& AForm::getName() const {
  return _name;
}

const int& AForm::getGrade() const {
  return _grade;
}

const int& AForm::getExec() const {
  return _exec;
}

bool AForm::getSign() const {
  return _sign;
}

void AForm::beSigned(const Bureaucrat& b) {
  if (b.getGrade() > _grade)
    throw GradeTooLowException();
  _sign = true;
}

AForm& AForm::operator=(const AForm& f) {
  if (this != &f) {
    *(const_cast<std::string*>(&_name)) = f.getName();
    *(const_cast<int*>(&_grade)) = f.getGrade();
    *(const_cast<int*>(&_exec)) = f.getExec();
    *(const_cast<bool*>(&_sign)) = f.getSign();
  }
  return *this;
}
AForm::AForm() : _name("default"), _grade(150), _exec(150), _sign(false){
    
}

AForm::AForm(const std::string& name, const int& grade, const int& exec) : _name(name), _grade(grade), _exec(exec), _sign(false) {
  _sign = false;  
  if (_grade < GRADE_MAX)
    throw GradeTooHighException();
  if (_grade > GRADE_MIN)
    throw GradeTooLowException();
}

AForm::AForm(const AForm& f) : _name(f.getName()), _grade(f.getGrade()), _exec(f.getExec()), _sign(f.getSign()) {
  if (_grade < GRADE_MAX)
    throw GradeTooHighException();
  if (_grade > GRADE_MIN)
    throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const AForm& f) {
  o << "Form: " << f.getName() << " Grade: " << f.getGrade() << " Exec: " << f.getExec() << " Sign: " << f.getSign();
  return o;
}

AForm::~AForm(void) {
    
}