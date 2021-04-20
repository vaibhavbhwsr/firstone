#include <iostream>

using namespace std; 
class swapit{
    int a, b;
    public:
        swapit(){
            a = 10;
            b = 20;
        }
        void display(){
            int d;
            a = a + b;
            b = a - b;
            a = a - b;
            cout << a <<" " << b;
        }
        void display2(){}
};
class inherit : public swapit{
    int c;
    public:
    inherit(){
    }

};
int main(){
    inherit s;
    s.display();
    return 0;
}