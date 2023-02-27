#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
float f;
float maxf=-99999;
float minf=99999;
for(int i=0;i<n;i++){
    cin>>f;
    maxf=max(f,maxf);
    minf=min(f,minf);
}
    cout<<maxf<<' '<<minf<<endl;
    return 0;
}
