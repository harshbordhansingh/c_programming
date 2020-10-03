#include <iostream>

using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
};

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number of position of the series is " << fib(n);
    return 0;
}