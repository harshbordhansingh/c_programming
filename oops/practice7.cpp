#include <iostream>

using namespace std;

class Area
{
public:
    Area(int a, int b)
    {
        cout << "The area of the rectangle is: " << a * b << endl;
    }
};

int main()
{
    Area t(4, 5);
    Area j(6, 7);
    return 0;
}