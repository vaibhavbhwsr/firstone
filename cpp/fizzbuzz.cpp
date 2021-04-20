#include  <iostream>

using namespace std;

void fizzbuzz(){
    for (int i = 1; i <= 100; i++){
        if(i % 15 == 0)
            cout<< "fizzbuzz\n";
        else if (i % 5 == 0)
            cout<< "buzz\n";
        else if (i % 3 == 0)
            cout<< "fizz\n";
        else
            cout<< i <<endl;
    }
}

int main(){
    
    fizzbuzz();
    return 0;

}