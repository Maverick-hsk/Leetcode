class Solution {
public:
    int majorityElement(vector<int>& nums) {

      int n=  nums.size();
      int ele = nums[0];
     int count = 0;
      for(int i=0;i<n;i++){
        if(ele == nums[i]){
            count++;
        }
        else if(count == 0){
            count = 1;
            ele = nums[i];
        }
        else{
            count--;
        }
      }
      for(int i =0;i<n;i++){
        if(ele == nums[i]) count++;
      }
      
      if(count> n/2) ele = ele;
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


    // unordered_map<int,int> umap;
    // for(int i = 0;i<n;i++){
    //     umap[nums[i]]++;
    // }
    
    // for(auto it: umap){
    //     if(it.second > n/2){
    //     ele = it.first;
    //     }
    // }

    // return ele;

    return ele;
    }
};