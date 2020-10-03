#include<iostream>

using namespace std;

class triangle{
    public:
    int s1, s2, s3;
    triangle(int a, int b, int c){
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void printing(){
        cout<<"The area of the triangle is: "<<(s1+s2+s3)/2<<endl;
        cout<<"The perimeter of the triangle is: "<<(s1+s2+s3)<<endl;
    }
};

int main(){
    triangle t(3, 4, 5);
    triangle e(4, 5, 9);
    t.printing();
    e.printing();

    return 0;
}