#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{0,0,1,1},{1,1,1,1},{0,1,0,0},{0,0,0,0}};
    int m = 4;
    int n = 4;
    int x = 1;

    
    int row  = 0;
    int maxOnes =0;
for (int i = 0; i < m; i++)
{
    int count = 0;
    int lo = 0;
    int hi = n - 1;
    int first = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[i][mid] == x) {
            first = mid;   
            hi = mid - 1; 
        } else if (arr[i][mid] < x) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    if (first != -1) {
        int count = n - first;
        if (count> maxOnes)
        {
            maxOnes = count;
            row = i;
        }
        
    } 

}
          cout<<"count = "<<maxOnes << " row = "<<row;

    return 0;
}
