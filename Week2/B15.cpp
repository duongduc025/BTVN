#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    a=b=c=1;
    while(c<=n){
        c=a+b;
        a=b;
        b=c;
        if(c==n || n==1){
            cout<<"Thuoc day Fibonacci"<<endl;
            break;
        }
    }
    if(c!=n && n!=1)
        cout<<"Khong thuoc day Fibonacci"<<endl;
    a=b=c=1;
    cout<<"1 1 ";
    while(c<=n){
        c=a+b;
        a=b;
        b=c;
        if(c<=n) {cout<<c<<' ';}
    }
    return 0;

}
