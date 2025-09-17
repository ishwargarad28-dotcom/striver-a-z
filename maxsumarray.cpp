#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 1};
    int size = 6;

    int maxsum = INT_MIN;

    for (int start = 0; start < size; start++)
    {
        int currentsum = 0;
        for (int end = start; end < size; end++)
        {
            currentsum += arr[end];
            maxsum = max(currentsum, maxsum);
        }
    }

    cout << "array of sum :" << maxsum << endl;
    return 0;
}
