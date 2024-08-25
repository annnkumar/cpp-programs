
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

int inversion(vector<int> &a,  vector<int> &b){
    int c =0;
    int i = 0,j = 0;
    int n = a.size();
    while(i<n && j< b.size())
    {
      
    if(a[i] > b[i]){
     c += n - i;
     j++;
    }
    else{
        i++;
    }

    }
    
    return c;
}

int mergesort1(vector<int> &v) {
    int count = 0;
    int n = v.size();
    if (n == 1) return 0;

    int mid = n / 2;
    vector<int> left(mid), right(n - mid);

    for (int i = 0; i < mid; i++) {
        left[i] = v[i];
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = v[i];
    }

   count += mergesort1(left);
   count +=  mergesort1(right);
   count += inversion(left ,right);

    merge(left, right, v);
    left.clear();
    right.clear();
    return count;
}

int main() {
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);

    mergesort1(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
   

    cout<<mergesort1(v);
    
    return 0;
}
