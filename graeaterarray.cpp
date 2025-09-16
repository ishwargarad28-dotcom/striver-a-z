#include <iostream>
#include <climits>
using namespace std;
int main()
// {
//     int size=5;
//     int  marks[size];
//     int greater=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//      cin>>marks[i];
//     }
//     for(int i=0;i<size;i++){
//         if(marks[i]>greater){
//             greater=marks[i];
//         }
//     }
//     cout<<"Greatest array :"<<greater<<endl;
//     return 0;
// }
{
    int nums[]={45,67,98,34,78};
    int size=5;
    int greater=INT_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]>greater){
            greater=nums[i];
        }
    }
    cout<<"greatest array : "<<greater<<endl;
    return 0;
}