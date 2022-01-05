#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
  long long int z,y,x;
  int a,b,c;


	for(int i=0;i<t;i++){
cin>>z>>y;
cin>>a>>b>>c;
z= z-y;
x= a;
x+=b;
x+=c;
if(x<=z){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    } 
    return 0;
}
