class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        vector<int> arr(26,0);

        for (char ch : sentence) {
            int place = ch- 'a';
            arr[place]++;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                return false;
            }
        }
        return true;
    }
};