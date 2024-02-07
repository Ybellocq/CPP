#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class Form{
    private:
        const std::string _name;
        const int _grade;
        const int _exec;
        bool    _sign;
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
        const int& getExec() const;
        bool getSign() const;
        void beSigned(const Bureaucrat& b);
        Form& operator=(const Form& f);
        Form(const Form& b);
        Form();
        Form(const std::string& name, const int& grade, const int& exec);
        ~Form();
};

std::ostream& operator<<(std::ostream& o, const Form& f);