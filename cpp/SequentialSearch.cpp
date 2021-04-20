//anything wrong here

#include <iostream>

using namespace std;

void sqs(int arr[], int size, int n){
    int check = 0;
    for(int i = 0; i < size; i++ ){
        if(arr[i] == n){
            cout<< "Yes at position " << i + 1;
            exit(0);
        }
    }
    cout << "Not found";
}
int main(){
    int arr[] = {2,3,4,5,6,7};
    int b = sizeof(arr)/sizeof(arr[0]);
    sqs(arr,b , 5);
    return 0;
}