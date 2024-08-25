#include <iostream>
#include <string>  // Include the string header
#include <vector>
#include <sstream>
using namespace std;

string decode(string s){
    string result;

   for(char x : s){
      if(x=='#'){
        if(!result.empty()){
            result.pop_back();
        }
      }else{
            result +=x;
      }
   }
   return result;
}

int main() {
    string s = "abc#d##c";
    string decoded = decode(s);
    cout << "Decoded string: " << decoded << endl;  // Output should be "ac"

    return 0;
}