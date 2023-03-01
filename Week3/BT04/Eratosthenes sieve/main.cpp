#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <bits/stdc++.h>
//Hoang Duc Duong dep trai


using namespace std;
bool a[100007];
void ktranto (int n)
{
    a[1]=true;
    a[0]=true;
    for(int i=2; i*i <= n; i++)
    {
        if(a[i]==false)
            for(int j= i*i; j <= n; j+=i)
                a[j]=true;
    }
}
int main()
{
   int c,b;
   cin >> c >> b;
   ktranto(b);
   for(int i = c; i <= b; i++)
    if(a[i] == false) cout << i <<" ";
}
