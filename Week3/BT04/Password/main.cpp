#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    string s[n+1];
    cin.ignore();
    for(int i = 1; i <= n; i++)
    {
        getline(cin,s[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        string temp = s[i];
        reverse(temp.begin(),temp.end());
        for(int j = i+1; j <= n; j++)
    {
        if(temp == s[j])
        {
            int pos = s[j].size();
            cout << pos << " ";
            cout << s[j][pos/2] <<" ";
        }
    }

    }

}
