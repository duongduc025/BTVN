#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
     char in[m+1][n+1];
    int out[m+1][n+1];
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            out[i][j] = 0;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> in[i][j];
        }
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
           {
               if(in[i][j] == '*') out[i][j] = -1;
               else out[i][j] += (in[i-1][j-1] == '*') +(in[i-1][j] == '*') +(in[i-1][j+1] == '*') +(in[i][j-1] == '*') +(in[i][j+1] == '*') +(in[i+1][j-1] == '*') +(in[i+1][j+1] == '*') +(in[i+1][j] == '*');
           }
      for(int i = 1; i <= m; i++)
        {
        for(int j = 1; j <= n; j++)
         {
             if(out[i][j] == -1) cout << '*' << " ";
             else cout << out[i][j] << " ";
         }
         cout << endl;
        }
}
