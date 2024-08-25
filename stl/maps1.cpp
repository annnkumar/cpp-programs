
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;                            
        m[s]++;
    }
    for (auto pr :m)
    {
       cout << pr.first << " " << pr.second <<endl;
    }
    
}

// ek unorderd mp hota hai ho output sort karke nahi deta hai
//uska syntax unordered_map<int,int> m; hota hai