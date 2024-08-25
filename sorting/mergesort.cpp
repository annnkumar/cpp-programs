#include <iostream>
#include<vector>
using namespace std;
// void merge(int arr[], int l , int mid, int r){
//     int an = mid -l +1;
//     int bn = r - mid ;
    
//     int a[an];
//     int b[bn];

//     for (int i = 0; i < an; i++)
//     {
//         a[i]=arr[l+i];
//     }
//     for (int j = 0; j < bn; j++)
//     {
//         b[j] = arr[mid+j+1];
//     }
//     int i = 0;
//     int j = 0;
//     int k = l;

//     while (i<an && j<bn)
//     {
//         if (a[i]<b[j])
//         {
//             a[k++]=a[i++];
//         }

//         else{
//              a[k++] = b[j++];
//         }
        
//     }
//     while (i<an)
//     {
//         a[k++] = a[i++];
//     }
//     while (j<bn)
//     {
//         a[k++] = b[j++];
//     }
    
    
// }
// void mergesort(int arr[] , int l ,int r){
//     if (l>r)
//     {
//         return ;
//     }
//     int mid = (l+r)/2;
//     mergesort(arr , l, mid);
//     mergesort(arr,mid+1,r);
//     merge(arr,l,mid,r);
// }



#include <iostream>
#include <vector>

using namespace std;

void merge(const vector<int> &a, const vector<int> &b, vector<int> &res) {
    int i = 0, j = 0, k = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }

    while (i < a.size()) {
        res[k++] = a[i++];
    }

    while (j < b.size()) {
        res[k++] = b[j++];
    }
}

void mergesort1(vector<int> &v) {
    int n = v.size();
    if (n <= 1) return;

    int mid = n / 2;
    vector<int> left(mid), right(n - mid);

    for (int i = 0; i < mid; i++) {
        left[i] = v[i];
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = v[i];
    }

    mergesort1(left);
    mergesort1(right);

    merge(left, right, v);
}

int main() {
    int arr[] = {12, 43, 55, 78, 98, 86};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);

    mergesort1(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
