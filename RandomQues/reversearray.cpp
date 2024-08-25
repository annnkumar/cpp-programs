#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    for (int i = 0,  j = n-1; i < j; i++,j--)
    {
        int t = arr[i];
        arr[i]=arr[j];
        arr[j] = t;
    }
    
}
void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int main(){
    int arr[5] = {2,4,1,6,4};
    int brr[6] = {6,-5,6,9,5,0};

    reverse(brr,6);
    reverse(arr,5);

    printarr(arr,5);
    printarr(brr,6);

}