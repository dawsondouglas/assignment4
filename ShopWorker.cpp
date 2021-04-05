#include "ShopWorker.h"

ShopWorker::ShopWorker(std::string lastName, std::string firstName, 
    std::string employmentStatus, std::string deptName, std::string phoneNumber,
     int shopID, float hourlyRate, int hoursWorked)
{
    ShopWorker::lastName = lastName;
    ShopWorker::firstName = firstName;
    ShopWorker::employmentStatus = employmentStatus;
    ShopWorker::deptName = deptName;
    ShopWorker::phoneNumber = phoneNumber;
    ShopWorker::shopID = shopID;
    ShopWorker::hourlyRate = hourlyRate;
    ShopWorker::hoursWorked = hoursWorked;
}

ShopWorker::~ShopWorker()
{
}

std::string ShopWorker::getEmploymentStatus()
{
    return ShopWorker::employmentStatus;
}

float ShopWorker::currentPayDue() const
{
    return hourlyRate * hoursWorked;
}

std::string ShopWorker::print() const
{
    return "Worker: " + firstName + " " + lastName + 
    "\nDepartment: " + deptName +
    "\nShop ID: " + std::to_string(shopID) +
    "\nPhone Number: " + phoneNumber +
    "\nEmployment Status: " + employmentStatus +
    "\nPay Due: " + std::to_string(currentPayDue());
}

std::ostream &operator<<(std::ostream& out, const ShopWorker& s)
{
    return out << s.print() << std::endl;
}