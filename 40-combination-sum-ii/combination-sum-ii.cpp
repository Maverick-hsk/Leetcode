class Solution {
public:

void func(int ind, vector<int>&arr, int target, vector<int>&ds, vector<vector<int>> &ans){
    if(target==0){
        ans.push_back(ds);
    }
    for(int i = ind; i<arr.size();i++){
        if(arr[i]>target){
            break;
        }
if(i >ind && arr[i]==arr[i-1]) continue;
    ds.push_back(arr[i]);
    func(i+1,arr,target-arr[i], ds,ans);
    ds.pop_back();
    }
}



    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        func(0,candidates,target,ds,ans);
        return ans;
    }
};