class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;
        while(i<n){
         int count= 0;
         char curr_ch = chars[i];
         while(i<n && chars[i]==curr_ch){
            count++;
            i++;
         }
         chars[index] = curr_ch;
         index++;
         if(count>1){
            string count_str = to_string(count);
            for(char &ch : count_str){
                chars[index] = ch;
                index++;
            }
         }

        }
        return index;
    }
};