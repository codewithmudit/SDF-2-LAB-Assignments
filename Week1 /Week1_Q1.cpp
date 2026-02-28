#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int total()
    {
        return marks1 + marks2 + marks3;
    }
    float average()
    {
        return (marks1 + marks2 + marks3) / 3.0;
    }
};
int main()
{
    int n;
    cout << "Enter the number of students : ";
    cin >> n;
    student *s = new student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Roll No. of student " << i + 1 << " : ";
        cin >> s[i].rollno;
        cout << "Enter Name of student " << i + 1 << " : ";
        cin >> s[i].name;
        cout << "Enter marks in subject 1 of student " << i + 1 << " : ";
        cin >> s[i].marks1;
        cout << "Enter marks in subject 2 of student " << i + 1 << " : ";
        cin >> s[i].marks2;
        cout << "Enter marks in subject 3 of student " << i + 1 << " : ";
        cin >> s[i].marks3;
    }
    int rollno, target = -1;
    cout << "Enter the roll no : ";
    cin >> rollno;
    for (int i = 0; i < n; i++)
    {
        if (rollno == s[i].rollno)
        {
            target = i;
            break;
        }
    }
    if (target == -1)
    {
        cout << "Invalid roll no" << endl;
    }
    else
    {
        cout << "Details of the required student are as follows " << endl;
        cout << "Name : " << s[target].name << endl;
        cout << "Roll No. : " << s[target].rollno << endl;
        cout << "Marks in subject 1 : " << s[target].marks1 << endl;
        cout << "Marks in subject 2 : " << s[target].marks2 << endl;
        cout << "Marks in subject 3 : " << s[target].marks3 << endl;
        cout << "Total marks : " << s[target].total() << endl;
        cout << "Average marks : " << s[target].average() << endl;
    }
    delete[] s;
}
