//Robust and Time Complexity O(1) designed on 18 feb TCS NQT ques 18 feb
//code.dcoder.tech/files/code/6036a47b81ec090d936c13fc/temp
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if( s[i] < 65 || s[i] > 90 && s[i] < 97 || s[i] > 122 )
            { cout<<"Only A-Z or a-z are allowed!"; break; }
        else if(s[i] >= 65 && s[i] <= 90) 
            cout<<char(155 - s[i]);
        else if(s[i] >= 97 && s[i] <= 122)
            cout<<char(219 - s[i]);
        else 
            { cout<<"Something not valid!"; break; }
    }
    return 0;
}