// Array DataStructure as an abstract datatype
#include <iostream>
#include <conio.h>

using namespace std;

class Array{
    public:

        int *a, length;
        int size;

        int traverse(){
            if(length == 0){
                return 0;
            }
            for(int i = 0; i < length; i++){
                cout << a[i] << " ";
            }
            return 1;
        }
        int insert(){
            if(length == size){
                cout<< "Array is full.";
                return 0;
            }
            else{
                int ele, pos;
                cout << "Enter new Element: ";
                cin >> ele;
                if(!traverse()){
                    a[0] = ele;
                    return 1;
                }
                cout << "Press 1 to add at beginning" << endl;
                cout << "Press 2 to add at a position" << endl;
                cout << "Press 3 to add at end" << endl;
                cin >> pos;
                switch(pos){
                case 1: for(int i = length - 1; i >= 0; i--){
                            a[i+1] = a[i];
                        }
                        a[0] = ele;
                        break;
                case 2: int temp;
                        cout << "Enter a Position: ";
                        cin >> temp;
                        for(int i = length - 1; i >= temp; i--){
                            a[i+1] = a[i];
                        }
                        a[temp] = ele;
                        break;
                case 3: a[length] = ele;
                }
                length++;
            }
            return 1;
        }
        int del(){
            return 0;
        }
        int search(){
            return 0;
        }
};
int main(){
    Array arr;
    int l;
    arr.a = new int[100];
    while(1){
    cout<< "\n\nEnter 1 to Insert" << endl
        << "Enter 2 to Delete" << endl
        << "Enter 3 to Search" << endl
        << "Enter 4 to Display" << endl
        << "Enter 5 to Quit" << endl;
        cin >> l;
        switch(l){
            case 1: if(arr.insert());
                    cout<< "\nOperation Completed";
                    break;
            case 2: if(arr.del());
                    cout<< "\nOperation Completed";
                    break;
            case 3: if(arr.search());
                    cout<< "\nOperation Completed";  
                    break;
            case 4: if(!arr.traverse())
                        cout<< "Empty";
                    cout<< "\nOperation Completed";  
                    break;
            case 5: exit(0);
        }
    }
    return 0;
}