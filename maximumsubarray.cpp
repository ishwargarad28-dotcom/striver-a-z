#include<iostream>
#include<vector>
using namespace std;
int main()
{
int array[8]={2,3,4,5,6,7,8,9};
 int size=8;

for(int start=0;start<size;start++){
    for(int end=0;end<size;end++){
        for(int i=start;i<=end;i++){
            cout<<array[i];
        }
        cout<<" ";
    }
    cout<<endl;
}
return 0;

}