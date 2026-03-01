#include <iostream>
using namespace std;
class employee
{
public:
    int empid;
    string name;
    double basicsalary;
    double hra()
    {
        return 0.20 * basicsalary;
    }
    double da()
    {
        return 0.10 * basicsalary;
    }
    int gross()
    {
        return basicsalary + hra() + da();
    }
    void display()
    {
        cout << "Employee ID : " << empid << endl;
        cout << "Name : " << name << endl;
        cout << "Basic Salary : " << basicsalary << endl;
        cout << "Gross Salary : " << gross() << endl;
    }
    employee(int id, string na, double bs)
    {
        name = na;
        empid = id;
        basicsalary = bs;
    }
    employee() {}
};
int main()
{
    int n;
    int id;
    double bs;
    string na;
    cout << "Enter the number of employees : ";
    cin >> n;
    employee *e = new employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the ID Name and Salary of employee " << i + 1 << ": ";
        cin >> id >> na >> bs;
        e[i] = employee(id, na, bs);
        cout << "Hra is : " << e[i].hra() << endl;
        cout << "da is : " << e[i].da() << endl;
    }
    int max = 0, target = -1;
    for (int i = 0; i < n; i++)
    {
        if (e[i].gross() > max)
        {
            max = e[i].gross();
            target = i;
        }
    }
    cout << "Employee with highest paid saray is : " << e[target].name << endl;
    cout << "Details of " << e[target].name << " are given below" << endl;
    e[target].display();
    string target2;
    cout << "Enter the ID or Name of the employee : ";
    cin >> target2;
    for (int i = 0; i < n; i++)
    {
        if (target2 == e[i].name)
        {
            cout << "Basic Salary of required employee is : " << e[i].basicsalary << endl;
            ;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (stoi(target2) == e[i].empid)
        {
            cout << "Basic Salary of required employee is : " << e[i].basicsalary << endl;
            break;
        }
    }
    delete[] e;
}
