#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
      unordered_set<int> s;
      s.insert(1);
      s.insert(2);
      s.insert(3);
      s.insert(4);
      s.insert(5);
      s.insert(1);
      cout<<s.size()<<endl;
      s.erase(2);
      int target = 4;
      //s.find() -> it searches in the set, and if
      // it is not found then it returns the last element
      if(s.find(target)!=s.end()){
         cout<<"exists"<<endl;
      }
     // for each loop
     for(int x : s){
        cout<<x<<" ";
     }


}


