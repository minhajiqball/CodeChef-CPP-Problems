#include <iostream>
using namespace std;

int main() {
	int L=0, R=0;
	cin>>L>>R;
	if(L%2==1){
	   for(int i=0;L<=R; i++){
	       cout<<L<<" ";
	       L=L+2;
	   }
	}
	else{
	    for(int i=0;L<R; i++){
	       cout<<L+1<<" ";
	        L=L+2;
	}
	}
	return 0;
}
