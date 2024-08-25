#include <iostream>
using namespace std;

int main() {
    int arr[13] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 13;
    int x = 1;

    int lo = 0;
    int hi = n - 1;
    int first = -1; 

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x) {
            first = mid;   
            hi = mid - 1; 
        } else if (arr[mid] < x) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    if (first != -1) {
        int count = n - first;
        cout << count << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
