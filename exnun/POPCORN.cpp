#include <iostream>


using namespace std;


int main(){

int t;
cin>>t;
long long int a1,a2,b1,b2,c1,c2;
long long int a,b,c;

for (int i = 0; i < t; i++)
{   
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
a=0;b=0;c=0;
    a=a1+a2;
    b=b1+b2;
    c=c1+c2;

    int d= max(a,max(b,c));


    cout<<d<<endl;



}



    return 0;


}


