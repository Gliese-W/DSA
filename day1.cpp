#include <iostream>
using namespace std;

bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        
        while (i<=j){
            if (!isalnum(s[i])){
                i++;
                continue;
            }

            if(!isalnum(s[j])){
                j--;
                continue;
            }

            if (tolower(s[i]) != tolower(s[j])){
                return false;
            }

            else{
                i++;
                j--;
            }

        }
  return true;
}

int main(){
  string s = "A man, a plan, a canal: Panama";
  cout << isPalindrome(s) << endl;

  string t = "race a car";
  cout << isPalindrome(t) << endl;
}