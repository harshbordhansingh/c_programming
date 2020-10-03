#include <iostream>

using namespace std;

class rectangle
{
public:
    int s1, s2;
    rectangle(int a, int b)
    {
        s1 = a;
        s2 = b;
    }
    void area()
    {
        cout << "The area of the rectangle is: " << s1 * s2 << endl;
    }
};

int main()
{
    rectangle t(4, 5);
    rectangle j(5, 8);

    t.area();
    j.area();

    return 0;
}