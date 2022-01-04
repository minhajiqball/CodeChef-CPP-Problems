#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	
	for( int i=0; i<a; i++){
	    
	    if((i%2)==0){
	    for(int j=i*5; j<(i+1)*5; j++){
	           cout<<j+1<<" ";
	    }
	    }
	    else{
	    for(int j=(i+1)*5; j>i*5; j--){
	           cout<<j<<" ";
	    }
	    }
	    cout<<"\n"<<endl;
	    
	    
	   //    
	 
	   
	   //cout<<endl;
	   
	   //      for(int k=5*i; k>5*(i-1); k--){
	   //          cout<<k<<" ";
	   //}
	   //cout<<endl;
	        
	    }
	    
	
	return 0;
}
