#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
  
  int y,z;


	for(int i=0;i<t;i++){
cin>>y>>z;
if(y%2==0 && z%2==0){
   cout<<(z*y/4);
    
}
 else if(y%2==1 && z%2==1){
     cout<<((z+1)*(y+1)/4);
 }
 else if(z%2==1){
     cout<<((z+1)*y/4);
 }else{
     cout<<((y+1)*z/4);
 }
cout<<endl;
    } 
    return 0;
}
