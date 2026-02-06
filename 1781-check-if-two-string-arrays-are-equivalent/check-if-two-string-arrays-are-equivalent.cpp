class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size();
        int m = word2.size();
        //   string s1 = "";
        //   string s2 = "";
        //   for(int i=0; i<n;i++){
        //     s1+= word1[i];
        //   }

        //  for(int j=0;j<m;j++){
        //     s2+= word2[j];
        //  }

        //    if(s1==s2) return true;
        //    else return false;
        int temp1 =0;
        int temp2 = 0;
        int i=0,j=0;
        while (temp1 < n && temp2 < m) {
            if (word1[temp1][i] != word2[temp2][j]) {
                return false;
            }
            i++;
            j++;
            if (i == word1[temp1].size()) {
                i = 0;
                temp1++;
            }
            if (j == word2[temp2].size()) {
                j = 0;
                temp2++;
            }
        }
       
        if(temp1==n && temp2==m)return true;
        return false;
            }
};