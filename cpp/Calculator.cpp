#include <iostream>

using namespace std;

int main(){
    system("cls");
    char c;
    float a, b;
    cout << "Enter sign +, -, x, / : ";
    cin >> c;
    cout << "Enter two digits: ";
    cin >> a >> b;
    switch(c){
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case 'x': cout << a * b; break;
        case '/': cout << a / b; break;
        default : cout << "Invalid Entries!";
    }
    return 0;
}