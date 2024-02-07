#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

#define GRADE_MAX           1
#define GRADE_MIN           150

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;

    Bureaucrat(void);

    public: 
        class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
};

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
};

    const std::string& getName() const;
    const int& getGrade() const;

    int& incrementGrade();
    int& decrementGrade();

    Bureaucrat& operator=(const Bureaucrat& b);
    Bureaucrat(const Bureaucrat& b);
    Bureaucrat(const std::string& name, const int& grade);
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif