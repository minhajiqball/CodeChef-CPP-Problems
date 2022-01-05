#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int o,x,y;
    for(int i=0;i<t; i++){
        cin>>o>>x>>y;
        if((x%2==0 && y%2==1) || (x%2==1 && y%2==0)){
            cout<<1;
        }
        else{
            cout<<0;
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
