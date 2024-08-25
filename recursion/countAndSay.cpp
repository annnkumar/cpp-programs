
#include <bits/stdc++.h>
#include<String>
using namespace std;

string CountAndSay(int n){
     if(n==1) {
        return "1";
     }
    string str =  CountAndSay(n-1);
    string ans = "";
    int freq = 1;
    char ch = str[0];
    int length = str.size();
    for(int i = 1; i < length ; i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{
            
             ans +=(to_string(freq) + ch);
            ch = dh;
            freq = 1;
       
        }
    }
     ans +=(to_string(freq) + ch);
     return ans;
}

int main(){

    
   cout<< CountAndSay(8);

}