#include <iostream>
#include <cmath>

using namespace std;

bool checkPrimes(int a){
    if( a == 1) return false;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    system("cls");
    int a;
    bool check;
    cout << "Enter a no.";
    cin >> a;
    for(int i = 2 ; i <= a / 2; i++){
        if(checkPrimes(i)){
            if(checkPrimes(a - i)){
                cout << a << "=" << i << "+" << a - i << endl;
                check = true;
            }
        }
    }
    if(!check)
        cout << "Not have any combination for prime as a sum";
    return 0;
}