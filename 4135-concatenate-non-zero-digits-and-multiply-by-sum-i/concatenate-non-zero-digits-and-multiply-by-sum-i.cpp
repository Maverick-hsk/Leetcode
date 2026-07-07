class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string a = "";
        long long sum =0;
        for(int i = 0;i<s.size();i++){
            if(s[i]!='0'){ 
                a+=s[i];
               sum += s[i] -'0';
            
            }    
        }
        
        if(a.empty()) return 0;

        return  stoi(a) * sum;
    }
};