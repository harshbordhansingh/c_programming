#include<iostream>

using namespace std;

int main(){
    int a = 4;
    for (int i = 0; i < a; i++)
    {
        for (int j = a; j > i ; j--)
        {
            cout<<"*\t";
        }

        cout<<endl;
        
    }
    
    return 0;
}