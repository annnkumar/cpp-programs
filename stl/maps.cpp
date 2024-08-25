#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
  cout<<m.size()<<endl;
  for (auto &pr : m)
  {
    cout<< pr.first <<" " <<pr.second <<endl;
  }
  
}
int main(){
   map<int,string> m;
   m[1] = "abc";
   m[2] = "cdc";
   m[3] = "acd";
   m.insert({4,"afg"});
   //map<int,string> :: iterator it;
  // for(it = m.begin(); it!= m.end(); ++it){
     //cout<<(*it).first << " " << (*it).second<<endl;
  // }

   //for (auto &pr : m)
 //  {
 //    cout<<pr.first << " " <<pr.second<<endl;
 //  }
 auto it = m.find(7);
 if(it != m.end());
 m.erase(it);
// m.erase(3);
//  if(it == m.end()){
//   cout<< "NO values";
//  }else{
//   cout<<(*it).first << " " << (*it).second;
//  }
  print(m);
}