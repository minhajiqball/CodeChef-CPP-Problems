#include<iostream>
using namespace std;


int main(){
   int n;
   int j=0;
   cin>>n;
   int arr[n];
   
   for(int i =1;i<=n; i++){
       if(n%i==0)
       {
           arr[j]=i;
           j++;
       }
   }
   cout<< j<<endl;
   
    for(int i =0;i<j; i++){
     cout<<arr[i]<<" ";
   
    }
    
    return 0;
}
