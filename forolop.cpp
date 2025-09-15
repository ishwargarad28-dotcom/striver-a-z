#include <iostream>
using namespace std;
// int main(){
//     int fact,num;
//     fact=1;
//     cout<<"enter the num :";
//     cin>>num;
//     for(int i=1;i<=num;i++)
//     {
//         fact*=i;
//     }
//     cout<<"factorial :"<< fact <<endl;
//     return 0;
// }

bool prime(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{   
    int Prime=prime();
    if(Prime){
        cout<<"prime";
    }else{
        cout<<"NOt prime";
    }

}