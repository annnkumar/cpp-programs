#include <iostream>
using namespace std;


bool isPalindrome(string s, int i, int j){
    if(s[i]!=s[j]){
        return false;
    }

    isPalindrome(s,i+1,j--);

    return true;
}
int main(){
    string s = "hhhh";
    cout<<isPalindrome(s,0,s.size()-1);
}