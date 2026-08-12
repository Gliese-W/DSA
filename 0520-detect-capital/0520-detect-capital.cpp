class Solution {
public:
    bool detectCapitalUse(string word) {

        if (word.size() <= 1) return true;

        char firstLetter = word[0];
        char secondLetter = word[1];

        if (isupper(firstLetter) && isupper(secondLetter)){
            for (int i=2; i<word.size(); i++){
                if (!isupper(word[i])){
                    return false;
                }
            }
        }

        if (islower(firstLetter)){
            for (int i=1; i<word.size(); i++){
                if (!islower(word[i])){
                    return false;
                }
            }
        }

        if (isupper(firstLetter) && !isupper(secondLetter)){
            for (int i=2; i<word.size(); i++){
                if (!islower(word[i])){
                    return false;
                } 
            }
        }

        return true;
    }
};