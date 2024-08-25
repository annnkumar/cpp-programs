#include <iostream>
using namespace std;
int search(int arr[], int size , int key){
    int start = 0;
    int end = size -1;
      int mid = (start+end)/2;
    while (start<=end){
  

         if (key == arr[mid])
         {
            return mid;
         }
         
         if (key>arr[mid])
         {
            start = mid+1;

         }
         else{
            end = mid-1;
         }

         mid = (start+end)/2;
    }

    return -1;
}
int main(){
    int arr[6] = {1,3,4,5,9,6};
    int size = 6;
    int index = search(arr, size,9);
    cout<<"intdex is "<<index;

}