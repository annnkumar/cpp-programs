#include <iostream>
using namespace std;

int firstoccurence(int arr[], int size, int key) {
    int first = 0;
    int last = size - 1;
    int mid;
    int ans = -1;
    
    while (first <= last) {
        mid = first + (last - first) / 2;
        
        if (key == arr[mid]) {
            ans = mid;
            last = mid - 1;
        }
        else if (key < arr[mid]) {
            last = mid - 1;
        }
        else if (key > arr[mid]) {
            first = mid + 1;
        }
    }
    
    return ans;
}

int secondoccurence(int arr[], int size, int key) {
    int first = 0;
    int last = size - 1;
    int mid;
    int a = -1;

    while (first <= last) {
        mid = first + (last - first) / 2;

        if (key == arr[mid]) {
            a = mid;
            first = mid + 1;
        }
        else if (key < arr[mid]) {
            last = mid - 1;
        }
        else if (key > arr[mid]) {
            first = mid + 1;
        }
    }

    return a;
}

int main() {
    int arr[8] = { 1, 2, 3, 3, 3, 3, 4, 5 };
    int key = 3;
    int f = firstoccurence(arr, 8, key);
    int l = secondoccurence(arr, 8, key);

    cout << "First occurrence is " << f << ", last occurrence is " << l << endl;

    return 0;
}
