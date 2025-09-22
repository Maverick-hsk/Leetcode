// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& nums) {
//     int freq[100]={0};
//         for(int i=0;i<nums.size();i++){
//               freq[nums[i]]++;
//         }
//         int max=0;
//         int count = 1;
//         for(int i=0;i<100;i++){
//             if(max==freq[i] && freq[i]!=0){
//                 count++;
//             }
//             if(freq[i]>max){
//                 max= freq[i];
//                 count=0;
//             }
            
//         }
//       return count* max;
//     }
// };


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int max=0;
        int count;
        for(int i=0;i<101;i++){
            if(freq[i]>max){
                max= freq[i];
                count=0;
            }
            if(max==freq[i] && freq[i]!=0){
                count++;
            }
        }
        cout<<count<<max;
    return count*max;
    }
};