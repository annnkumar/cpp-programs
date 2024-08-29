#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

int main() {
    vector<vector<int>> input;  // Space between '>>' removed
    int n = 6;  // Number of pairs to be input

    // Take input
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        input.push_back({a, b});  // Use direct initialization with {}
    }

    // Output the vector to verify
    for (const auto &pair : input) {  // C++11 range-based loop
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }
     
    vector<int> enter;
    vector<int> exit;

    // Fill 'enter' and 'exit' vectors from 'input'
    for (auto &pair : input) {
        enter.push_back(pair[0]);
        exit.push_back(pair[1]);
    }

    // Sort vectors (assuming sorting is needed)
    sort(enter.begin(), enter.end());
    sort(exit.begin(), exit.end());

    // Output sorted vectors to verify
    cout << "Enter times: ";
    for (const auto &time : enter) {
        cout << time << " ";
    }
    cout << endl;

    cout << "Exit times: ";
    for (const auto &time : exit) {
        cout << time << " ";
    }
    cout << endl;

    return 0;
}