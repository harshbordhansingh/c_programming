#include<iostream>

using namespace std;

class Area{
    int a = 0, b = 0;
public:
    int setDim(){
        cout<<"Enter the length: "<<a<<endl;
        cin>>a;
        cout<<"Enter the length: "<<b<<endl;
        cin>>b;
        return 0;
    }
    void getArea(){
        cout<<"The area of the triangle is: "<<a*b<<endl;
    }
};

int main(){
    Area t;
    t.setDim();
    t.getArea();
    return 0;
}