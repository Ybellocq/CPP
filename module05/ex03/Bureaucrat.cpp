#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return "Bureaucrat Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return "Bureaucrat Grade Too Low";
}

const std::string& Bureaucrat::getName() const {
  return _name;
}

const int& Bureaucrat::getGrade() const {
  return _grade;
}

int& Bureaucrat::incrementGrade() {
  if (_grade - 1 < GRADE_MAX)
    throw GradeTooHighException();
  return --_grade;
}

int& Bureaucrat::decrementGrade() {
  if (_grade + 1 > GRADE_MIN)
    throw GradeTooLowException();
  return ++_grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
  if (this != &b) {
    *(const_cast<std::string*>(&_name)) = b.getName();
    _grade = b.getGrade();
  }
  return *this;
}

Bureaucrat::Bureaucrat(){
    std::cout << "constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
  : _name(b.getName()), _grade(b.getGrade()) {
  if (_grade < GRADE_MAX)
    throw GradeTooHighException();
  if (_grade > GRADE_MIN)
    throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade) : _name(name), _grade(grade){
  if (_grade < GRADE_MAX)
    throw GradeTooHighException();
  if (_grade > GRADE_MIN)
    throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
  return o << b.getName() << " bureaucrat grade "
          << b.getGrade();
}

void Bureaucrat::signForm(const AForm& f) const {
  try {
    (*const_cast<AForm*>(&f)).beSigned(*this);
    std::cout << "<" << _name << "> signs <"
      << f.getName() << ">" << std::endl;
  } catch (std::exception& e) {
    std::cerr << "<" << _name << "> cannot sign <"
      << f.getName() << "> because <" << e.what() << ">" << std::endl;
  }
}

void Bureaucrat::executeForm(AForm const& form)
{
    form.execute(*this);
}
