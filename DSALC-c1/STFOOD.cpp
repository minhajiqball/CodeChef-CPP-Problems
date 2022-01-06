#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n][3];
	    int res[n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<3;j++){
	            cin>>arr[i][j];
	            
	        }
	        res[i]=(((arr[i][1])/(arr[i][0]+1))*(arr[i][2]));
	        
	    }
	    int m = sizeof(res) / sizeof(res[0]);
	    sort(res, res+m);
	    cout<<res[n-1]<<endl;
	}
	return 0;
}
