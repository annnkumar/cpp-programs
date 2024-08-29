#include <iostream>
#include<string>
#include<unordered_map>

//bhubneshwar
//output - u
//Input: "aabbccdeeffg"
//Output: d

using namespace std;

int main(){
     string str ;
     cout<<"Enter a word: ";
     cin>>str;
     cout<<"You Enterd: "<< str <<endl;
     unordered_map<char,int> mp;
     for(char x : str){
      mp[x]++;
     }

     for (int i = 0; i < str.length(); i++)
     {
      /* code */
       char c   = str[i];
       if (mp[c]==1)
       {
            cout<<c<<endl;
            break;
       }
       
     }

     return 0;
     
}