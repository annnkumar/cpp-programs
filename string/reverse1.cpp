#include<iostream>
#include<string>
using namespace std;

string reverse1(string s1){
      reverse(s1.begin(), s1.end());
      return s1;
}

int main(){
      string s1 = "ankit";
     string s =  reverse1(s1);
     cout<<s<<endl;

}