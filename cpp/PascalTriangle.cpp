// Not cleared perfectly.
#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a, coef;
    cout << "Enter a no. ";
    cin >> a;
    for(int i = 0 ; i < a ; i++){
        coef = 1;
        for(int k = a; k > i; k--){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            if(i == 0 || j == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << " ";
        }
        cout << endl;
    }
    return 0;
}