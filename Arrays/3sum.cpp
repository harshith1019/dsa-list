#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<vector<int>> m;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(nums[i]+nums[j]+nums[k]==0){
                s.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if(nums[i]+nums[j]+nums[k]>0){
                k--;
            }
            else{j++;}
        }
    }
    for(auto i: s){
        m.push_back(i);
    }
    return m;
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
        vector<vector<int>> threesum = threeSum(nums);
        for(int i=0; i<threesum.size(); i++){
            for(int j=0; j<threesum[i].size(); j++){
                cout<<threesum[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}