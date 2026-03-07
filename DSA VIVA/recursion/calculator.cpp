#include<iostream>
using namespace std;

// Recursive Addition
int add(int a, int b){
    if(b == 0)
        return a;
    return add(a + 1, b - 1);
}

// Recursive Subtraction
int subtract(int a, int b){
    if(b == 0)
        return a;
    return subtract(a - 1, b - 1);
}

// Recursive Multiplication
int multiply(int a, int b){
    if(b == 0)
        return 0;
    return a + multiply(a, b - 1);
}

// Recursive Power
int power(int a, int b){
    if(b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main(){
    int a, b, choice;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"\n1. Add";
    cout<<"\n2. Subtract";
    cout<<"\n3. Multiply";
    cout<<"\n4. Power";
    cout<<"\nEnter choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Result = "<<add(a,b);
            break;
        case 2:
            cout<<"Result = "<<subtract(a,b);
            break;
        case 3:
            cout<<"Result = "<<multiply(a,b);
            break;
        case 4:
            cout<<"Result = "<<power(a,b);
            break;
        default:
            cout<<"Invalid choice";
    }

    return 0;
}