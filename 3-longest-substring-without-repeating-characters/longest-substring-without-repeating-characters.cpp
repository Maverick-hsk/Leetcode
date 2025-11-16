class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int n= s.size();
        unordered_map<char,int> umap;
        int maxi = 0;
        while(j<n)
        {
            umap[s[j]]++;
            if(umap.size()==j-i+1){
                maxi = max(maxi,j-i+1);
            }
           if(umap.size()<j-i+1){
            umap[s[i]]--;
            if(umap[s[i]]==0) umap.erase(s[i]);
            i++;
           }
           j++;
        }
        return maxi;
    }
};