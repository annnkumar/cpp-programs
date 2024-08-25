#include <iostream>
using namespace std;
/*
void count(int n){
    if(n==0) return ;
   // cout<<n<<" ";
    count(n-1);
   cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    
    count(n);
    

   return 0;
}


int fibona(int n){
    if (n==0 ){
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
    return fibona(n-2) + fibona(n-1);
}
int main(){
    int n;
    cin>>n;

    fibona(n);

    cout<<fibona(n);
    return 0;
}*/
/*int climb(int n){
    if (n<0)
    {
    return 0;
    }
    if (n==0)
    {
        return 1;
    }
    
    int ans = climb(n-1) + climb(n-2);

    return ans;
}
int main(){
    int n;
    cin>>n;

    climb(n);

    cout<<climb(n);
    return 0;
}*/
/// number in word problem
/*void word(int n , string arr[]){
   if (n==0)
   {
      return ;
   }
   int digit = n%10;
   n=n/10;
   cout<<arr[digit]<<" "<<endl;

   word(n,arr);
   cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cin>>n;

    string arr[] = {"zero", "one", "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten"};

    word(n, arr);
 //   cout<<"word is :- ";

    return 0;

}*/

/*#include <iostream>
using namespace std;
int sorted(int *arr , int n,int key){
   
    if(n==0){
        
        return -1;
    }
    if (*arr==key) return 0;
   
    int ans  = sorted(arr+1 , n-1,key);
    return ans+1;
}
int main(){
    int n = 8;
    int arr[8] = {1,2,3,9,8,7,5,4};
    int key = 8;
    int ans = sorted(arr, n,key);
    if(ans!=-1){
        cout<<"is present "<< ans<<endl;
        
    }
    else{
        cout<<"gand marao";
    }
    return 0;
}*/

// binary search

/*bool binarysearch(int *arr, int s, int e, int key){
    if (s>e)
    {
        return false;
    }
     int mid = s+ (e-s)/2;
    
    
   
    if (arr[mid]==key)
    {
        return true;
    }
    
        if (key>arr[mid])
        {
           return binarysearch(arr,mid+1,e,key);
        }
        else{
           return binarysearch(arr,s,mid-1,key);
        }
    
   
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key = 47;
    int ans = binarysearch(arr,0,n-1,47);

    if (ans==1)
    {
        cout<<"elmment is found"<<endl;
    }
    if(ans==0){
        cout<<"element is not found"<<endl;
    }
    return 0;
}*/

// power of a to the b

int po(int a, int b){
    if (b==0)
    {
        return 1;
    }
    if (b==1)
    {
        return a;
    }
     int ans = po(a,b/2);
     if(b%2==0)   {
        return ans*ans;
     }
     else{
        return a*ans*ans;
     }
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;

    int ans = po(a,b);
    cout<<ans;
    return 0;
}