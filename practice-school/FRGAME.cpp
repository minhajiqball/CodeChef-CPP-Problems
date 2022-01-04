#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int nitin,subh,c,d;
	for(int i=0; i<n; i++){
	cin>>nitin>>subh>>c>>d;
	if(subh>nitin){
	    nitin +=c;
	}else{
	    subh+=c;
	}
	if(subh>nitin){
	    nitin +=d;
	}else{
	    subh+=d;
	}
	if(nitin>=subh){
	    cout<<"N \n";
	}else{
	    cout<<"S \n";
	}
	
	    
	}
	while(n)
	return 0;
}
