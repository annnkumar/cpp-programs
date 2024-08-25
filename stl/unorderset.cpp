 


 // order matter nahi karta hai koi value hai ya nahi 
 // hai wo check karta hai o(1) 

 /*
 give N strings and q queries in each queary you are given
 a string print yes if string is present else print no*/

 #include <bits/stdc++.h>
using namespace std;
// sare string ko sorted order me 
int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string str;
        cin>> str;
        if(s.find(str) == s.end()){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }
    }
    
    //  for (auto value : s)
    //  {
    //     cout << value <<endl;
    //  }
     
    
}