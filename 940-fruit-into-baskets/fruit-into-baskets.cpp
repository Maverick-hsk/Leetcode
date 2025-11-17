class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        int n= fruits.size();
        int maxi = 0;
        unordered_map<int,int> umap;
        while(j<n)
        {
         umap[fruits[j]]++;
         if(umap.size()>2)
         {
            while(umap.size()>2)
            {
              umap[fruits[i]]--;
              if(umap[fruits[i]]==0)
              {
                umap.erase(fruits[i]);
              }
              i++;
            }
         }
         else if(umap.size()== j-i+1 || j+1> umap.size())
         {
           maxi = max(maxi, j-i+1);
         }
         j++;
        }
        return maxi;
    }
};