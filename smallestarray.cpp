#include <iostream>
#include <climits>
using namespace std;
int main()
{
   //from user input
    int size = 5;
    int marks[size];
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }
    }
    cout << "smallest array  :" << smallest << endl;
    return 0;
}
// {
//     // direct array values
//     int nums[] = {66, 56, 5, 6, 59};
//     int size = 5;
//     int smallest = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] < smallest  )
//         {
//             smallest = nums[i];
//         }
//     }
//     cout << "smallest in array :" << smallest << endl;
//     return 0;
// }
