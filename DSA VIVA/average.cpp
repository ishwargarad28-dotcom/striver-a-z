#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, sum, multi, avg;
    cout << "enter the first number :";
    cin >> num1;
    cout << "enter the second number :";
    cin >> num2;
    cout << "enter the third number :";
    cin >> num3;
    sum = num1 + num2 + num3;
    multi = num1 * num2 * num3;
    avg = sum / 3;
    cout << "sum is :" << sum << endl;
    cout << "multiplication is :" << multi << endl;
    cout << "average is :" << avg << endl;
    return 0;
}