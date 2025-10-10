#include <bits/stdc++.h>
using namespace std;
int swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a;
    return b;
}
int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1) cout<< "no zeroes";
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap1(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++){
        cout<< arr[i];
    }
}