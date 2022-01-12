#include <iostream>


using namespace std;


int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, a;
        cin >> n >> a;

        
         if (n==1){
            if(a%2==0){
                 cout << "even" << endl;
            }
            else{
                   cout << "odd " << endl; 
            }
         }
         else if(n % 2 == 1 && a & 1 == 1)
{                cout << "odd " << endl;
        }
        else if (n % 2 == 0 && a & 1 == 1) {
            cout << "even" << endl;

        }
        // (a&1 == 0)
         else{
            cout << "Impossible" << endl;
        }






    }

    return 0;


}


