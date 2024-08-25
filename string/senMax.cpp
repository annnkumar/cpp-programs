// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void sortArray(vector<int>& arr) {
//     sort(arr.begin(), arr.end());
// }

// int main() {
//     vector<int> arr;
//     arr.push_back(5);
//     arr.push_back(2);
//     arr.push_back(9);
//     arr.push_back(1);
//     arr.push_back(5);
//     arr.push_back(6);

//     int s  = arr.size();
//     int max = INT_MIN;
//     for(int i  = 0; i<s;i++){
//          if (arr[i]>max)
//          {
//             max = arr[i];
//          }
//     }
//     cout<<max<<" "<<endl;
     
    
  
//      int secMax = 0;

//      for (int i = 0; i < s; i++)
//      {
//        cout<<arr[i]<<" ";
//      }
     
//    arr.erase(remove(arr.begin(), arr.end(), max), arr.end());
//     s  = arr.size();
//      cout<<endl;
//      for (int i = 0; i < s; i++)
//      {
//        cout<<arr[i]<<" ";
//      }
//          sortArray(arr);

//       secMax = arr.back();
//       cout<<endl;
//       cout<<secMax;
// //     for(int i = 0; i<s; i++){
// //         if (arr[i]==max)
// //         {
// //             arr[i] = 0;
// //         }
        
// //     }
// //     for(int i  = 0; i<s;i++){
// //          if (arr[i]>max)
// //          {
// //             max = arr[i];
// //          }
// //     }
// //     cout<<max;


//     return 0;
// }

#include <iostream>
#include <vector>
#include <climits>  // for INT_MIN
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};

    int s = sizeof(arr)/sizeof(arr[0]);
    if (s < 2) {
        cout << "Array doesn't have enough elements to find the second maximum." << endl;
        return 0;
    }

    int max = INT_MIN;
    int secMax = INT_MIN;

    // Traverse the array
    for(int i = 0; i < s; i++) {
        if (arr[i] > max) {
            secMax = max; // Update second maximum before max
            max = arr[i]; // Update maximum
        } else if (arr[i] > secMax && arr[i] != max) {
            secMax = arr[i]; // Update second maximum if current element is less than max but greater than secMax
        }
    }

    if (secMax == INT_MIN) {
        cout << "There is no second maximum value (all elements might be the same)." << endl;
    } else {
        cout << "Second maximum value: " << secMax << endl;
    }

    return 0;
}