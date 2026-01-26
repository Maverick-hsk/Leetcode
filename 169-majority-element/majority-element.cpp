class Solution {
public:
    int majorityElement(vector<int>& nums) {

      int n=  nums.size();
      int ele = INT_MIN;
        // for(int i=0;i<n;i++){
        //     int count =  0;
        //     for(int j=0;j<n;j++){
        //        if(nums[i]==nums[j]){
        //         count++;
        //        }
        //     }
        //     if(count> n/2)  ele = nums[i]; 
        // }
        // return ele;


    unordered_map<int,int> umap;
    for(int i = 0;i<n;i++){
        umap[nums[i]]++;
    }
    
    for(auto it: umap){
        if(it.second > n/2){
        ele = it.first;
        }
    }

    return ele;
    }
};