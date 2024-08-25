#include <iostream>
using namespace std;
int firstoccurence(int arr[], int size, int key){
    int first = 0;
    int last = size -1;
    int mid = first+(last-first)/2;
    int ans;
       while (first<=last)
    {
        if (key==arr[mid])
        {
            ans = mid;
            last = mid -1;
        }
        else if (key<arr[mid])
        {
            last = mid+1;
        }
       else if (key>arr[mid])
       {
            first = mid+1;
       }
       mid = (first + last)/2;
       
}
return ans;
}
int secondoccurence(int arr[], int size , int key){
    int first = 0;
    int last = size -1;
    int mid = first+(last-first)/2;
    int a;
    while (first<=last)
    {
        if(key==mid){
            a = mid;
            first = mid+1;
        }

        else if (key<arr[mid])
        {
            last = first +1;
        }
        else if (key>arr[mid])
        {
            first = last -1;
        }
        mid = (first + last)/2;

            }
    return a;
}
int main(){
    int arr[8]= {1,2,3,3,3,3,4,5};
    //int size = 8;
    int key = 3;
   int f =  firstoccurence(arr,8,3);
  int l =  secondoccurence(arr,8,3);

    cout<<"first occurence is "<<f<<"last occurence is "<<l;
    return 0;

}