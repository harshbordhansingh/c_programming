#include <iostream>

using namespace std;

void swap(int a, int b);
void swap1(int *a, int *b);

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is before swaping " << a << " and the value of b is before swaping " << b << endl;
    swap(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    cout << "The value will not be changed using call by value" << endl;

    swap1(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    cout << "The value will be changed using call by reference" << endl;

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}