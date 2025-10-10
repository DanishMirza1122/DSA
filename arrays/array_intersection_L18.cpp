#include <bits/stdc++.h>
using namespace std;
vector<int> intarray(vector<int> a, vector<int> b)
{
    int i = 0;
    int j = 0;
    int n = a.size();
    int m = b.size();
    vector<int> intvect;
    while (i < n&& j < m)
    {
        if(a[i]==b[j]){
            intvect.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else i++;
    }
    for (auto it = intvect.begin(); it != intvect.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    return intvect;
}
int main()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int y;
        cin >> y;
        b.push_back(y);
    }
    intarray(a, b);
}