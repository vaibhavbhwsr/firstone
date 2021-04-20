#include <iostream>
 
using namespace std;

ostream &operator<<(ostream &output, int a){
    output << a * a;
    return output;
}
int main(){
    int a = 5;
    cout<<a;
}