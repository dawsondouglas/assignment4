#ifndef EMPLOYEE_CODE
#define EMPLOYEE_CODE

#include <string>
#include <iostream>
#include "IPayable.h"

class Employee : public IPayable
{
public:
    std::string firstName;
    std::string lastName;
    std::string employmentStatus;
    virtual std::string getEmploymentStatus() = 0;
    virtual std::string print() const = 0;
    friend std::ostream &operator<<(std::ostream& out, const Employee& e);
};

#endif
