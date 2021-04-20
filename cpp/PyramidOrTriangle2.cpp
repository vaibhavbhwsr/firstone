#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a,t;
    char c = 'A';
    cout << "Enter a no.";
    cin >> a;
    t = 2 * a;
    for(int i = 1; i <= a ; i++){
        for(int k = t ; k >= i; k--){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << c << " ";
        }
        cout << endl;
        t -= 1;
        c++;
    }
    return 0;
}