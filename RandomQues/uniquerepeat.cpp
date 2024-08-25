#include <iostream>
using namespace std;
void findUniqueElements(int arr[],int size){
     for (int i = 0; i < size; i++)
     {
      int  isunique = 1;
        for (int j  =i+1 ; j< size; j++)
        {
            if (i!=j && arr[i]==arr[j])
            {
              
                break;
            }
    
        }
        if (isunique==1)
        {
            cout<<arr[i]<<" ";
        }
     }
     cout<<endl;
     
}


int main() {
    int arr[] = { 1, 2, 3, 4, 5, 2, 4, 6, 7, 3 };
    int brr[]
    int size = sizeof(arr) / sizeof(arr[0]);

    findUniqueElements(arr, size);

  
    
}