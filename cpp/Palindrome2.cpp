#include <iostream>

using namespace std;

int main(){
    system("cls");
    string a, b;
    int j = 0;
    cout << "Enter ";
    cin >> a;
    for(int i = a.size()-1; i >= 0 ; i--){
        b[j] = a[i];
        j++;
    }
    cout<< b;
    /*if(b == a)
    cout<< "Yes";
    else
    cout<< "No";*/
    return 0;
}