#include <iostream>
using namespace std;
void printarray(int arr[], int size){
    int i;
    for ( i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void swap(int arr[],int n){
    
    for (int i = 0; i < 6; i+=2)
    {
        if (i%2==0)
        {
           swap(arr[i],arr[i+1]);
        }
        
    }
    
}
int main(){
    int arr[6]={1,2,3,4,5,8};
    swap(arr ,6);
    printarray(arr,6);
    
    cout<<arr[6]<<" ";

}