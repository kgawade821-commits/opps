#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;

public:
    // Constructor
    Employee(int id, string n)
    {
        emp_id = id;
        name = n;

        cout << "Employee record created for "
             << name << endl;
    }

    // Function to display employee details
    void display()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << name << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee record removed for "
             << name << endl;
    }
};

int main()
{
    Employee emp(101, "Anjali");

    emp.display();

    return 0;
}
