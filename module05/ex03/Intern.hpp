#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : public Bureaucrat
{
    public:
        Intern();
        Intern(Intern const& copy);
        Intern& operator=(Intern const& copy);
        ~Intern();
        AForm* makeForm(std::string const& name, std::string const& target);
        int checkNameForm(std::string const& name);
    private:
        ShrubberyCreationForm shrubb;
        RobotomyRequestForm robotomy;
        PresidentialPardonForm pres;    
};