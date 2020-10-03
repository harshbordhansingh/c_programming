#include<iostream>

using namespace std;

int main(){
    int marks[] = {23, 34, 56, 45, 57};
    for(int i = 0; i<5; i++){
        cout<<"The marks of student "<<i+1<<" is: "<<marks[i]<<endl;
    }
    return 0;
}