
          // this for float value like 12.3 , 49.99 which having not fixwd range
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void bucketsort(float arr[], int size){
      // float bucket;
        vector<vector<float>> bucket(size, vector<float> ());

        float max_ele = arr[0];
        float min_ele = arr[0];
        for (int i = 0; i < size; i++)
        {
            max_ele = max(max_ele,arr[i]);
            min_ele = min(min_ele,arr[i]);
        }

        float range = (max_ele - min_ele);
        
       
        // inserting element in bucket
         
         for (int i = 0; i < size; i++)
         {
            int index = (arr[i]- min_ele)/range;
            bucket[index].push_back(arr[i]);
         }
         
       // sorting individual bucket

       for (int i = 0; i < size; i++)
       {
          if (!bucket[i].empty())
          {
             sort(bucket[i].begin(), bucket[i].end());
          }
          
       }
       


       // combining of element
       // if more than one elment in one index then we use it this program
       int k =0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < bucket[i].size(); j++)
            {
                arr[k++]=bucket[i][j];
            }
            
        }
        return ;
}
int main(){
    float arr[] = {0.13,1.89,2.63,4.75,0.2,1.39,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr , size);
    for (int  i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}