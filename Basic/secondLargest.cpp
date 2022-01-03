#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    
    cin>>a>>b>>c;
    if((b<a&& c>a)||(c<a&& b>a)){
        cout<<a;
    }
    else if((a<b&& c>b)||(c<b&& a>b))
    {
        cout<<b;
    }
    else{
        cout<<c;
    }
    
	// your code goes here
	return 0;
}
