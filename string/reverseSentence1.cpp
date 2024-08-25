#include<iostream>
#include<string>
#include<sstream>  // For std::istringstream
#include<vector>   // For std::vector
#include<algorithm> // For std::reverse

using namespace std;

string reverseWords(string s) {
    istringstream iss(s);
    vector<string> words;
    string word;
    
    // Split the string into words
    while (iss >> word) {
        words.push_back(word);
    }
    
    // Reverse the order of words
    reverse(words.begin(), words.end());
    
    // Reconstruct the string with reversed words
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    string s1 = "KIIT IS BEST UNIVERSITY";
    
    // Output - UNIVERSITY BEST IS KIIT
    string s = reverseWords(s1);
    cout << s << endl;

    return 0;
}