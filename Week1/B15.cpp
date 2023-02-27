#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1,s2,s3;
    s1="a";
    s2="b";
    cout<<s1<<' '<<s2<<' ';
    for(int i=0;i<8; i++){
    s3=s2+s1;
    cout<<s3<< ' ';
    s1=s2;
    s2=s3;
    }

    return 0;
}
