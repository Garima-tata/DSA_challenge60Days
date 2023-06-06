#include <bits/stdc++.h> 
using namespace std;


vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{   sort(intervals.begin(), intervals.end());
    vector<vector<int>>ans;
    int n = intervals.size();
    for (int i = 0; i < n; i++) { 
        if(ans.empty() || intervals[i][0]>ans.back()[1]){
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = mergeIntervals(intervals);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}