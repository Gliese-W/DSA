// problem number 344 leetcode

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverseString(string &s) {
      int i = 0;
      int j = s.size()-1;
      while(i<j){
          swap(s[i], s[j]);
          i++;
          j--;
      }
}

int main(){
  string s = "hello";
  reverseString(s);
  cout << s;
  return 0;
}