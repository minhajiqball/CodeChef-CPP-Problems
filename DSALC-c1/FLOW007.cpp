#include <iostream>
#include <sstream>
using namespace std;

int main() {
 string num;
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
	cin>>num;
 
    //Use of reverse iterators
    string rev = string(num.rbegin(),num.rend());
    stringstream reverse(rev);
 
    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    reverse >> x;
 
    cout<<x<<endl;
}

	
	return 0;
}
