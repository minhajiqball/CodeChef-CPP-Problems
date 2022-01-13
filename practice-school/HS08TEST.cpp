#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    float y;
    cin >> t>>y;
    if ((y-.50)>=t && t%5==0){
        cout<<fixed<<setprecision(2)<<(y-.50-t);
    }
else{
     cout<<fixed<<setprecision(2)<<(y);
}
  

    return 0;


}
