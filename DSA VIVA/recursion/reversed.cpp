#include<iostream>
using namespace std;

int reverse(int n, int rev){
    
    // Base condition
    if(n == 0){
        return rev;
    }

    // Recursive call
    rev = rev * 10 + n % 10;
    return reverse(n/10, rev);
}

int main(){
    int n = 1234;

    int result = reverse(n,0);

    cout<<"Reversed number = "<<result;

    return 0;
}