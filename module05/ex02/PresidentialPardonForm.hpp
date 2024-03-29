#pragma once

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const& copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);
        void execute(Bureaucrat const& executor) const;
    private:
        std::string _target;
};
