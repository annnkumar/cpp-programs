// AAABBCCCC -> A3B2C4

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;

string A2(string s){
    string ans;
    map<char, int> m;
    for(char x: s){
      m[x]++;
    }
    
    for(const auto &m1: m){
      char c  = m1.first;
      int fre = m1.second;
     // char fre1 = '0' + fre;
      ans += c;
     ans += to_string(fre);

    //  ans +=  fre1;

    }

    return ans;
}

int main(){
      string s = "AAABBCCCC";
      
      string an = A2(s);
      cout<<an<<endl;

}
