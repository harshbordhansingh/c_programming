#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    string name;
    int roll_no;
    void printing(student *a);
};

void printing(student *a)
{
    cout << "The name of the student is: " << a->name << endl;
    cout << "And his roll no is: " << a->roll_no << endl;
}

int main()
{
    student j;
    j.name = "JOHN";
    j.roll_no = 2;
    printing(&j);
    return 0;
}