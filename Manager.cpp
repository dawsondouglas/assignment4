#include "Manager.h"

Manager::Manager(std::string lastName, std::string firstName, 
    std::string employmentStatus, std::string deptName, int storeID,
     float salary, int daysSince)
{
    Manager::lastName = lastName;
    Manager::firstName = firstName;
    Manager::employmentStatus = employmentStatus;
    Manager::deptName = deptName;
    Manager::storeID = storeID;
    Manager::salaryPerDay = salary;
    Manager::daysWorkedSinceLast = daysSince;
}

Manager::~Manager()
{
}

std::string Manager::getEmploymentStatus()
{
    return Manager::employmentStatus;
}

float Manager::currentPayDue() const
{
    return salaryPerDay * daysWorkedSinceLast;
}

std::string Manager::print() const
{
    return "Manager: " + firstName + " " + lastName + 
    "\nDepartment: " + deptName +
    "\nStore Location: " + std::to_string(storeID) +
    "\nEmployment Status: " + employmentStatus +
    "\nPay Due: " + std::to_string(currentPayDue());
}

std::ostream& operator<<(std::ostream& out, const Manager& m)
{
    return out << m.print() << std::endl;
}