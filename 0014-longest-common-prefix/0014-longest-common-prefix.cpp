class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int i=0;
        int j=0;

        sort(strs.begin(), strs.end());

        string firstString = strs[0];
        string lastString = strs[strs.size()-1];

        while (i<firstString.size()){
            if (firstString[i] == lastString[i]){
                ans += firstString[i];
                i++;
            } else{
                break;
            }
        }
        return ans;
    }
};