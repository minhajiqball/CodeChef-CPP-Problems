#include <iostream>
using namespace std;
int n, m,o=-1;



int main() {
cin>>n>>m;
int a[n];
for (int i =0; i<n; i++){
    cin>>a[i];
    if(a[i]==m){
        o=1;
    }
}
cout<<o;



return 0;
    
}