#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    if((N%5==0) && (N%11==0))
    {
cout <<"BOTH"  << endl;
    }
    else if((N%5==0) && (N%11!= 0) ||(N%5!= 0) && (N%11==0))
    {
cout <<"ONE"<< endl;
    }
    else{
        cout<<"NONE";
    }
    
	// your code goes here
	return 0;
}
