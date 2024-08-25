
#include<iostream>
using namespace std;


int partition(int arr[] , int si , int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i = si; i<= ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count  + si;
    swap(arr[(si+ei)/2] , arr[pivotIdx]);
    int i = si;
    int j  = ei;
    while (i<pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement)
        {
            i++;
        }
       else  if (arr[j]>pivotElement)
        {
            j--;
        }
        else if(arr[i]> pivotElement && arr[j] <=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIdx;

}
int  kthSelect(int arr[], int first , int last , int k){
    
    int pi = partition(arr , first ,last);

    if(pi+1==k) return arr[k];
    else if (pi+1 > k)
    {
        return kthSelect(arr, first, pi-1, k);
    }
    else kthSelect(arr, pi+1, last , k);
   

   // return;

}
int main(){

    int arr[] = { 43,55,78,98,86};
    int n = sizeof(arr)/sizeof(arr[0]);

    kthSelect(arr, 0, n-1 , 4);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    cout<< kthSelect(arr,0,n-1,2);
}