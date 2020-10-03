#include<iostream>

using namespace std;

class Volume{
private:
    int h, v, s;
public:
    Volume(int a, int b, int c){
        a = h;
        b = v;
        c = s;
        int volum = a*b*c;
        cout<<"The volume of the given object is: "<<volum;
    }
};

int main(){
    Volume(4, 3, 5);
    return 0;
}