#include <bits/stdc++.h>
using namespace std;

long n,tests,ar[200000],s[200000];
long ans;

int main(){
cin>>tests;
for (int i = 1; i <= tests; i++)
{
 cin>>n;
 for (int i=1;i<=n;i++)
 {
  cin>>ar[i];
  s[i]=s[i-1]+ar[i];
 }
 ans=0;
 for (int i=1;i<=n;i++)
  if(s[i-1] == s[n] - s[i]) ans=1;
  if (ans) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
cin.get();cin.get();
return 0;}
