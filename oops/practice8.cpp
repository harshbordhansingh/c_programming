#include <iostream>

using namespace std;

class Average
{
public:
    // float sum = 0, avg;
    float calculate(int a, int b, int c);
    void printing();
};

float Average ::calculate(int a, int b, int c)
{
    float sum = a + b + c;
    float avg = sum / 3;
    cout << "The sum of the three numbers is: " << sum << endl;
    cout << "The average of the three numbers is: " << avg << endl;
    return 0;
}

void printing()
{
    Average t;
    t.calculate(5, 6, 7);
}

int main()
{
    // calculate(5, 6, 7);
    printing();
    return 0;
}