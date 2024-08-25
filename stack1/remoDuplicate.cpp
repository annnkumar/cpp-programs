#include <iostream>
#include<stack>
using namespace std;

string removeDuplicate(string s){
   stack<char> st;
   st.push(s[0]);
   for(int i = 1; i < s.length(); i++){
       if (s[i]==st.top())
       {
           continue;
       }else{
            st.push(s[i]);
       }
   }
   s = "";
   while (st.size()>0)
   {
       s = s+st.top();
       st.pop();
   }

  reverse(s.begin(), s.end());
  return s;
}
int main(){
      string s = "aqqqqqbbbbbiiifgii";
      cout<<s<<endl;
      s = removeDuplicate(s);
      cout<<s<<endl;
}