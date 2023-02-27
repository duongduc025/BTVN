#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void read(string temp){   // hàm đọc số có 3 chữ số
    vector<char> num = {'1','2','3','4','5','6','7','8','9'};  //9
    vector<string> arr= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};  //9
    vector<string> num2 = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19"};  //10
    vector<string> arr2={"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};  //10
    vector<string> arr3={"linh tinh","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};  //9
    while(temp[0]== '0'){
        temp.erase(temp.begin());
    }
    int k=temp.length();
    reverse(temp.begin(), temp.end());
    for(int i=k-1; i>=0;i--){
        if (i==2){
            int x = find(num.begin(), num.end(), temp[i]) - num.begin();  //index tuong ung trong arr
            cout<<arr[x]<< " hundred ";
        }
        if(i==1){
            if (temp[i]=='1'){
                string check = temp.substr(0,2);
                reverse(check.begin(), check.end());
                int x = find(num2.begin(), num2.end(), check) - num2.begin();
                cout<< arr2[x]<<' ';
                return;
            }
            else if (temp[i]=='0'){}
            else {
                int x = find(num.begin(), num.end(), temp[1]) - num.begin();
                cout<<arr3[x]<<'-';
            }
        }
        if (i==0){
            if(temp[0]==0)
                return;
            else{
                int x = find(num.begin(), num.end(), temp[0]) - num.begin();
                cout<<arr[x]<<' ';
            }
        }
    }



}

int main(){
    string s;
    cin>>s;
    string temp;
    if (s[0]=='-'){
        cout<<"negative ";
        s.erase(s.begin());
    }
    if (s=="0"){
        cout<<"zero";
        return 0;
    }
    int n = s.length();
    if(n>=7){
        temp = s.substr(0, n-6);  // 3 chu so dau;
        read(temp);
        cout<<"million ";

        temp = s.substr(n-6,3);
        read(temp);
        if(temp != "000")
            cout<<"thousand ";

        temp = s.substr(n-3,3);
        read(temp);
    }
    else if(n>=4 &&n<7){
        temp = s.substr(0,n-3);
        read(temp);
        cout<<"thousand ";

        temp = s.substr(n-3,3);
        read(temp);
    }
    else{
        temp = s.substr(0,n);
        read(temp);
    }
    return 0;
}
