#include <iostream>
using namespace std;
// int partition(int arr[], int first, int last){
          
//            int pivot = arr[last];
//            int i = first -1;
//            int j = first;
//            for ( ; j< last; j++)
//            {
//              if (arr[j]<pivot)
//              {
//                 i++;
//                 swap(arr[i],arr[j]);
//              }
             
//            }
           
//            swap(arr[i+1],arr[last]);
//            return i+1;
// }

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
void quicksort(int arr[], int first , int last){
    if (first>last)
    {
        return ;
    }
    int pi = partition(arr , first ,last);
    partition(arr, first, pi-1);
    partition(arr, pi+1,last);

    return;

}
int main(){

    int arr[] = { 43,55,78,98,86};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}