#include <iostream>
using namespace std;


int main() {
    int n,t1,t2,r1,r2;
    cin>>n;
    for(int i=0;i<n;i++){
    cin >> t1>>t2>>r1>>r2;
    long int a=(t1*t1*r2*r2*r2);
    long int b=(t2*t2*r1*r1*r1);
    if(a==b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<"\n";


    }
    return 0;
}
