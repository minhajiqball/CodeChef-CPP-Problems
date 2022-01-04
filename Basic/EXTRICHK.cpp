#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	
	cin>>a>>b>>c;
	if((a+b)>c && (a+c)>b && (c+b)>a ){
	if(a==b && b==c && c==a){
	    cout<< 1;
	}
	else if(a==b ||b==c || c==a){
	    cout<< 2;
	}
	    else{
	        cout<<3;
	    }
	    
	}else{
	        cout<<-1;
	    }
	
	return 0;
}
