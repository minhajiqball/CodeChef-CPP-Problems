#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;


    for (int i = 0; i < t; i++) {
        int n, target;

        cin >> n >> target;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr+n);
        
        int count=0, total=0;
        int k=n;

for (int i = n-1; i >=0 ; i--) {
    total+=arr[k-1];
    count++;
    if(total>=target)
    {
        cout<<count<<endl;
        break;
    }
    k--;

}

if(total <target){
     cout<<-1<<endl;
}




    }




    return 0;
}
