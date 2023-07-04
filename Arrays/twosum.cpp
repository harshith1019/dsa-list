#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j]==target){
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int> nums;
        int size;
        cin>>size;
        for(int i=0; i<size; i++){
            int a;
            cin>>a;
            nums.push_back(a);
        }
        int target;
        cin>>target;
        vector<int> twosum = twoSum(nums, target);
        for(int i=0; i<twosum.size(); i++){
            cout<<twosum[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}