#include <iostream>
#include<unordered_map>
using namespace std;
int main(){
      unordered_map<string,int> m;
      pair<string,int> p1;
      p1.first = "ragav";
      p1.second = 76;
      m.insert(p1);
      
      // pair<string,int> p2;
      // p2.first = "ragavii";
      // p2.second = 76;
      // m.insert(p2);
      
      // pair<string,int> p3;
      // p3.first = "ragavoo";
      // p3.second = 76;
      // m.insert(p3);

      m["Harsh"] = 15;
      m["Lokesh"] = 67;


      
      for(pair<string,int> p : m){
         cout<<p.first<<" "<<p.second<<endl;
      }
      m.erase("ragav");
      cout<<m.size()<<endl;
      cout<<endl;
      for(pair<string,int> p : m){
         cout<<p.first<<" "<<p.second<<endl;
      }


}