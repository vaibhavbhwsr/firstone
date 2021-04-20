/* INPUT HackerRank 
2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10
*/
#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    
    deque<int> dq;
    
    for(int i = 0 ; i < n ; i++){
        // base case for the first element
        if(dq.empty()){
            dq.push_back(i);
        }
        
        //remove element outside to the current window
        if(dq.front() <= i - k){
            dq.pop_front();
        }
        //move max element to the front
        while(!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        //print out only when the first window is completed
        if(i >= (k - 1)){
            cout << arr[dq.front()] << " ";
        }
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
