#include <iostream>
#include <climits>
using namespace std;


int main(){
int arr[] = {2,-3,4,4,-7,-1,4,-2,6};

int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;
int ans[n-k+1];

for (int i = 0; i <= n-k; i++)
{
    for (int j = i; j < i+k; j++)
    {
    
     if(arr[j]<0){
        ans[i] = arr[j];
         break;
     }
   

    }
            if (ans[i] == INT_MAX) ans[i] = 0; // If no negative number was found, set to 0 (or any other indication)

}

int m = sizeof(ans)/sizeof(ans[0]);

for (int i = 0; i < m; i++)
{
    cout<<ans[i]<<" ";
}


return 0;
}