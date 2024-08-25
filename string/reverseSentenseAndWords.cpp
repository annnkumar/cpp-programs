// KIIT IS BEST UNIVERSITY]
// YTISREVINU TSEB SI TIIK

//#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;


string reverse1(string s){
      reverse(s.begin(),s.end());
      return s;
}

string reverse3(string s){
      istringstream iss(s);
      vector<string> words;
      string ans;
      string word;
      while(iss >> word){
         words.push_back(reverse1(word));
      }
      
      reverse(words.begin(), words.end());
      
      for(int i = 0; i<words.size(); i++){
            ans += words[i];

            if(i<words.size()-1){
                  ans += " ";
            }
      }
      
       return ans;

}

int main(){ 
      string s = "KIIT IS BEST UNIVERSITY";

      string an = reverse3(s);

      cout<<an<<endl;
}

