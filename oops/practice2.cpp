#include<iostream>
#include<string>

using namespace std;

class student{
    public:
    string address;
    string name;
    int roll_no;
    int phone_no;
    void printing(student *a);
};

void printing(student *a){
    cout<<"Name of the student is: "<<a -> name<<endl;
    cout<<"Address of the student is: "<<a -> address<<endl;
    cout<<"Roll_no of the student is: "<<a -> roll_no<<endl;
    cout<<"phone number of the student is: "<<a -> phone_no<<endl;
}

int main(){
    student j,s;

    j.name = "JOHN";
    j.address = "Naharkatia";
    j.roll_no = 1;
    j.phone_no = 12345;

    s.name = "SAM";
    s.address = "Duliajan";
    s.roll_no = 2;
    s.phone_no = 67890;

    printing(&j);
    printing(&s);

    return 0;
}