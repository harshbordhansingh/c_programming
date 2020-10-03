#include <iostream>

using namespace std;

int main()
{
    int marks[] = {23, 34, 56, 45, 57};
    int *p = marks;
    for (int i = 0; i < 5; i++)
    {
        cout << "The marks of student " << i + 1 << " is: " << *(p + i) << endl;
    }

    return 0;
}