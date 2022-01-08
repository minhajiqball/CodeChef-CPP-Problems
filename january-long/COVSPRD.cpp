#include <iostream>
#include<cmath>
using namespace std;


int main() {
    int t;

    long int n, d;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> d;
        long long  int  p = 1;
        if (d <= 10)
        {


            p = (pow(2, d));
            if (n >= p) {
                cout << p << endl;
            } else {
                cout << n << endl;
            }


        }
        else if (d > 10)
        {   p = 1024;

            for (int i = 0; i < (d - 10) ; i++) {
                if(p<n){
               
                p = 3 * p;
                }
                else{break;}
            }
            if (n >= p && p>0) {
                cout << p << endl;
            } else {
                cout << n << endl;
            }


        }

    }
    return 0;

}