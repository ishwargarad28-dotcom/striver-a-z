#include<iostream>
using namespace std;

void permute(string str, int l, int r){
    
    // Base case
    if(l == r){
        cout << str << endl;
        return;
    }

    for(int i = l; i <= r; i++){
        swap(str[l], str[i]);      // swap characters
        permute(str, l+1, r);      // recursion
        swap(str[l], str[i]);      // backtracking
    }
}

int main(){
    string str = "ABC";
    permute(str, 0, str.length()-1);
    return 0;
}