#include <iostream>
#include <climits>
using namespace std;


int main(){
int arr[] = {7,1,2,5,8,4,9,3,6};

int n = sizeof(arr)/sizeof(arr[0]);
int k = 4;

int maxSum = 0;
int prevSum = 0;

for(int i = 0; i<k; i++){
    prevSum += arr[i];
}


int maxIdx = 0;

int j =k;
int i = 1;
maxSum = prevSum;
while (j<n)
{
    /* code */
     prevSum = prevSum + arr[j] - arr[i-1];
     if (prevSum > maxSum )
     {
        maxSum = prevSum;
        maxIdx = i;
     }
     
    i++;
    j++;
}
cout<<maxSum<<endl;
cout<<maxIdx<<endl;

return 0;
}