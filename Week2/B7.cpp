#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<' ';
    int temp=n;
    while(n>0){
        cin>>n;
        if(n==temp)
            continue;
        else cout<<n<<' ';
        temp=n;
    }
}
