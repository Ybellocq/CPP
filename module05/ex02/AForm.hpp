#pragma once

#include <iostream>
#include <string>
#include <fstream>

class Bureaucrat;

class AForm{
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
        AForm& operator=(const AForm& f);
        virtual void execute(Bureaucrat const& executor) const = 0;
        AForm(const AForm& b);
        AForm();
        AForm(const std::string& name, const int& grade, const int& exec);
        ~AForm();
};

std::ostream& operator<<(std::ostream& o, const AForm& f);