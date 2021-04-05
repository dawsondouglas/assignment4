#include <fstream>
#include <vector>
#include <sstream>
#include "Employee.h"
#include "Manager.h"
#include "ShopWorker.h"

using namespace std;

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        cout << "Correct usage:" << endl;
        cout << argv[0] << " filename" << endl;
        return 0;
    }

    string filename = argv[1];
    vector<Employee*> employees;
    fstream file;
    string line;
    
    try
    {
        file.open(filename);
        if (file.fail())
        throw exception();
    }
    catch(const std::exception& e)
    {
        cout << "File " << filename << "could not be opened";
        throw e;
    }

    while (!file.eof())
    {
        if (getline(file,line))
        {
            try
            {
                stringstream ss(line);
                string identifier;
                ss >> identifier;
                if (identifier == "****")
                {
                    continue;
                }
                if (identifier == "Manager")
                {
                    string lName;
                    string fName;
                    string eStatus;
                    string dName;
                    int storeId;
                    float salary;
                    int daysSinc;

                    if (!ss.eof())
                    ss >> lName;
                    if (!ss.eof())
                    ss >> fName;
                    if (!ss.eof())
                    ss >> eStatus;
                    if (!ss.eof())
                    ss >> dName;
                    if (!ss.eof())
                    ss >> storeId;
                    if (!ss.eof())
                    ss >> salary;
                    if (!ss.eof())
                    ss >> daysSinc;

                    Employee *m = new Manager(lName, fName, eStatus, dName, storeId, salary, daysSinc);
                    employees.push_back(m);
                }
                if (identifier == "ShopWorker")
                {
                    string lName;
                    string fName;
                    string eStatus;
                    string dName;
                    string pNum;
                    int shopId;
                    float rate;
                    int hours;

                    if (!ss.eof())
                    ss >> lName;
                    if (!ss.eof())
                    ss >> fName;
                    if (!ss.eof())
                    ss >> eStatus;
                    if (!ss.eof())
                    ss >> dName;
                    if (!ss.eof())
                    ss >> pNum;
                    if (!ss.eof())
                    ss >> shopId;
                    if (!ss.eof())
                    ss >> rate;
                    if (!ss.eof())
                    ss >> hours;

                    Employee *s = new ShopWorker(lName, fName, eStatus, dName, pNum, shopId, rate, hours);
                    employees.push_back(s);
                }
            }
            catch(exception ex)
            {
                cout << ex.what();
                break;
            }
        }
    }

    for (Employee *emp : employees)
    {
        cout << *emp << endl;
    }
}
