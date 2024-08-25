#include <bits/stdc++.h>
using namespace std;
// sare string ko sorted order me 
int main(){
    set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
     for (auto value : s)
     {
        cout << value <<endl;
     }
     
    
}
// orser se logn 