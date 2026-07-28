class Solution {
public:
    string smallestPalindrome(string s) {

        if (s.size() <= 1) return s;

        string first = "";
        for (int i=0; i<s.size()/2; i++){
            first += s[i];
        }

        sort(first.begin(), first.end());

        // string second = "";

        // for (int i=s.size()-1; i>s.size()/2; i--){
        //     second += s[i];
        // }

        string second = first;

        reverse(second.begin(), second.end());

        string mid = "";
        mid += s[s.size()/2];

        if (s.size()%2==0){
            return first + second;
        }

        // return first + string(1, s[s.size()/2]) + second;
        return first + mid + second;
    }
};