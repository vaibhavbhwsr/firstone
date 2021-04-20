#include <iostream>
#include <cmath>

using namespace std;

void prime_no(int a, int b){
    int check;
    while(a <= b){
        check = 0;
        if(a == 1) a++;
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                check++;
                //break;
            }
        }
        if(check == 0)
            cout << a << " ";
        a++;
    }
}
int main(){
    system("cls");
    int a, b;
    cout << "Enter Interval or two no. ";
    cin >> a >> b;
    prime_no(a,b);
    return 0;
}