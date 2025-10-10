#include <bits/stdc++.h>
using namespace std;

void printNumber(int &num)
{
    if (num > 1000 or num < -1000)
    {
        cout << "invalid input";
    }
    else
    {
        cout << num;
    }
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    printNumber(num);
    return 0;
}