#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
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
        if(containsDuplicate(nums)){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
        cout<<endl;
    }
    return 0;
}