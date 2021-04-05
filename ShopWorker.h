#ifndef SHOPWORKER_CODE
#define SHOPWORKER_CODE

#include "Employee.h"

class ShopWorker : public Employee
{
    std::string deptName;
    std::string phoneNumber;
    int hoursWorked;
    float hourlyRate;
    int shopID;
    std::string print() const override;
public:
    ShopWorker(std::string lastName, std::string firstName, 
    std::string employmentStatus, std::string deptName, std::string phoneNumber,
     int shopID, float hourlyRate, int hoursWorked);
    ~ShopWorker();
    std::string getEmploymentStatus() override;
    float currentPayDue() const override;
    friend std::ostream &operator<<(std::ostream& out, const ShopWorker& s);
};




#endif 
