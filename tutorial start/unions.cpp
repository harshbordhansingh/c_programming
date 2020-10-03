#include<iostream>

using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    // union money m1;
    // m1.rice = 12;
    // m1.car = 'c';
    // cout<<m1.car;// you can use only one at a time

    enum Meal{ breakfast, lunch, dinner };
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    return 0;
}