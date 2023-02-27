#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=x;j<=n;j++){
            cout<<j<<' ';
        }
        for(int j=1;j<x;j++){
            cout<<j<<' ';
        }
        cout<<endl;
        x++;
    }
}
