#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float marks;

private:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
    public:
    void process()
    {
        input();
        display();
    }
};

int main()
{
    Student s;
  //che  s.name="dyp";

s.process();
    //s.input();
    //s.display();

    
}