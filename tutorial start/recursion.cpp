#include<iostream>

using namespace std;

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}

int main(){
    int f = 1, n;
    cout<<"Enter the number: ";
    cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     f = f*i;
    // }
    
    cout<<"The factorial of "<<n<<" is "<<factorial(n);

    return 0;
}