#include "Employee.h"

std::ostream &operator<<(std::ostream& out, const Employee& e)
{
    return out << e.print() << std::endl;
}