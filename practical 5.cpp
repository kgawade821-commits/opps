#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    string course;

public:
    Student(int r, string n, string c)
    {
        rollNumber = r;
        name = n;
        course = c;
    }

    void displayDetails()
    {
        cout << "Student Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s1(101, "Anjali", "Computer Science");

    s1.displayDetails();

    return 0;
}
