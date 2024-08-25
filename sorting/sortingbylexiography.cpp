#include <iostream>
#include <string.h>
using namespace std;

void selectionsortstring(char fruit[][54] , int n){
      for (int i = 0; i < n-1; i++)
      {
        int min_idx = i;
        for (int j= i+1; i < n; j++)
        {
            if (strcmp(fruit[min_idx],fruit[j])>0)
            {
                min_idx = j;
            }
            
        }
        if (min_idx!=i)
        {
            swap(fruit[i],fruit[min_idx]);
        }
        
      }
      return ;
}
int main(){
    char fruit[][54] = { "papaya" , "lime" , "jahar" , "sukhalpeda" , "feda"};
    int n = sizeof(fruit)/sizeof(fruit[0]);

    selectionsortstring(fruit , n);
    for (int i = 0; i < n; i++)
    {
        cout<<fruit[i]<<" ";
    }cout<<endl;
    
}