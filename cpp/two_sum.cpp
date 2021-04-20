#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rt;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; i < nums.size(); i++){
                if(i == j){
                    continue;
                }
                if(nums[i] + nums[j] == target){
                    rt.push_back(i);
                    rt.push_back(j);
                    cout<<rt[0] << rt[1];
                    return rt;
                }
            }
        }
    }
};
int main(){
    vector<int> v,u;
    int temp;
    Solution t;
    for(int i = 0 ; i < 4; i++){
        cin>> temp;
        v.push_back(temp);
    }
    cin >> temp;
    u = t.twoSum(v,temp);
    cout<< u[0] << " " << u[1];
    return 0;
}