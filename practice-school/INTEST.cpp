#include <bits/stdc++.h>
using namespace std;


int main() {

    int t, n;
    cin >>t>>n;
    long long int num; int count=0;
    for (int i = 0; i < t; i++)
    {
        cin>>num;
        if(num%n==0){
            ++count;
        }
    }
    
    cout<<count;
   
  

    return 0;


}
