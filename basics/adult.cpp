#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "enter your age:" << endl;
    cin >> x;
    if (x < 18)
    {
        cout << "not eligible for job";
    }
    else if (x > 18)
    {
        if (x < 55)
        {
            cout << "eligible for job";
        }
        else if (x <= 57)
        {
            cout << "retiremnet soon";
        }
        else if (x > 57)
        {
            cout << "retiremnet time";
        }
    }
}