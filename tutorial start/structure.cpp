#include<iostream>

using namespace std;

typedef struct employee
{
    int id;
    char favcar;
    float salary;
}ep;


int main(){
    ep harsh;
    harsh.id = 1;
    harsh.favcar = 'c';
    harsh.salary = 10000000000000;
    cout<<"The value of harsh salary: "<<harsh.salary<<endl;
    cout<<"The value of harsh id: "<<harsh.id<<endl;
    cout<<"The value of harsh favchar: "<<harsh.favcar<<endl;
    return 0;
}