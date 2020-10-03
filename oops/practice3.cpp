#include <iostream>

using namespace std;

class triangle
{
public:
    int a, b, c;
    void area_perimeter(triangle *j);
};

void area_perimeter(triangle *j)
{
    cout << "The area of the triangle is: " << ((j->a) * (j->b)) / 2 << endl;
    cout << "The perimeter of the triangle is: " << (j->a) + (j->b) + (j->c) << endl;
}

int main()
{
    triangle k;
    k.a = 3;
    k.b = 4;
    k.c = 5;
    area_perimeter(&k);
    return 0;
}