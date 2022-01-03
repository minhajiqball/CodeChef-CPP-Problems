#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	string d;
	cin>>a>>b>>c;
	
	
d=	(a+b>=c && b+c>=a && c+a>=b)? "YES" :"NO";

cout<<d;
	
	
	
	
	return 0;
}
