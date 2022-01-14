#include <bits/stdc++.h>
using namespace std;


int main() 
{

    int t;
    cin >> t;
    
   
    for (int i = 0; i < t; i++) 
    { int dragon = 0, sloth = 0;
        int arr[6]={0};
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            dragon += arr[i];
        }
        for (int i = 3; i < 6; i++)
        {
            sloth += arr[i];
        }

        if (dragon > sloth) {
            cout << "Dragon" << endl;
        }
        else if (sloth > dragon)
            cout << "sloth" << endl;
        else
        {
            if (arr[0] > arr[3]) {
                cout << "Dragon" << endl;
            }
            else if (arr[0] < arr[3]) {
                cout << "Sloth" << endl;
            }
            else {
                if (arr[1] > arr[4]) {
                    cout << "Dragon" << endl;
                }
                else if (arr[1] < arr[4]) {
                    cout << "sloth" << endl;
                }
                else {
                    cout << "Tie" << endl;
                }
            }

        }
    }


return 0;


}
