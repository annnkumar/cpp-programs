#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void print(set<string> &s){
    for(string val : s)
    {
        cout << val << endl;
    }
    for (auto it = s.begin(); it!=s.end(); ++it)
    {
       // cout << (*it) << endl;
    }
    
}
int main(){
    set<string> s;
    s.insert("abc");
    s.insert("asdd");
    s.insert("hddd");
    auto it = s.find("abc");
    // find ka use
   if(it != s.end()){
    //cout<< (*it);
    // use of erase
      s.erase(it);
   }

   // 
    print(s);
}