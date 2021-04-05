#ifndef MANAGER_CODE
#define MANAGER_CODE

#include "Employee.h"
#include <iostream>

class Manager : public Employee
{
    std::string deptName;
    int daysWorkedSinceLast;
    float salaryPerDay;
    int storeID;
    std::string print() const override; 
public:
    Manager(std::string lastName, std::string firstName, 
    std::string employmentStatus, std::string deptName, int storeID,
     float salary, int daysSince);
    ~Manager();
    std::string getEmploymentStatus() override;
    float currentPayDue() const override;
    friend std::ostream& operator<<(std::ostream& out, const Manager& m);
};

#endif 