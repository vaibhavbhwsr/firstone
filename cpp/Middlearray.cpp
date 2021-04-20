#include <iostream>

using namespace std;

int main(){
int n;
cout<< "Enter size of the array ";
cin>> n;
int a[n];
cout<< "Enter element of the array ";
for(int i = 0; i < n; i++){
    cin>> a[i];
}
int t = n / 2;
if(n % 2 != 0)
cout<< a[t];
else
cout << a[t-1] << a[t];
}