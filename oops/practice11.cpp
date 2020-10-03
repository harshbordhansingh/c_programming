#include <iostream>

using namespace std;

class Employee
{
public:
    string name, address;
    int yearOfJoining;
};

void design()
{
    cout << "Name"
         << "\t"
         << "Year Of Joining"
         << "\t\t"
         << "Address" << endl;
}
void printing(Employee *a)
{
    cout << a->name << "\t" << a->yearOfJoining << "\t\t" << a->address << endl;
}

int main()
{
    Employee t, s, j;

    t.name = "Robert";
    t.yearOfJoining = 1994;
    t.address = "64C- WallsStreat";

    s.name = "Sam";
    s.yearOfJoining = 2000;
    s.address = "68D- WallsStreat";

    j.name = "John";
    j.yearOfJoining = 1999;
    j.address = "26B- WallsStreat";

    design();
    printing(&t);
    printing(&s);
    printing(&j);
    return 0;
}