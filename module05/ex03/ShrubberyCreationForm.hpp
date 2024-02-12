#pragma once

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const& copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);
        void execute(Bureaucrat const& executor) const;
    private:
        std::string _target;
};
