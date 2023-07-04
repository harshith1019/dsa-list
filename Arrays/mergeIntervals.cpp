#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> interval;
    if(intervals.size()==1){
        return intervals;
    }
    interval.push_back(intervals[0]);
    for(int i=1; i<intervals.size(); i++){
        if(interval.back()[1]>=intervals[i][0]){
            interval.back()[1] = max(interval.back()[1], intervals[i][1]);
        }
        else{
            interval.push_back({intervals[i][0], intervals[i][1]});
        }
    }
    return interval;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> nums;
        int size;
        cin>>size;
        for(int i=0; i<size; i++){
            for (int j= 0; j < 2; j++) {
                int a;
                cin>>a;
                nums[i].push_back(a);
            }
        }
        vector<vector<int>> interval = merge(nums);
        for(int i=0; i<interval.size(); i++){
            for(int j=0; j<interval[i].size(); j++){
                cout<<interval[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}