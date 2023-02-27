#include <bits/stdc++.h>
#include <set>
using namespace std;
int a[100007];
int counta[100007];
int main()
{
    int n;
    cin >> n;
    set<int> b;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(b.count(a[i]) != 0)
        {
            cout << "YES";
            return 0;
        }
        else
            b.insert(a[i]);
    }
    cout << "NO";
}
