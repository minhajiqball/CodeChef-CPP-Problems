#include <iostream>


using namespace std;


int main() {
    int t;
    cin >> t;

    int num;
     long long int riff;

   long long int  * og ;
   long  long int  * temp;



    for (int i = 0; i < t; i++) {
        cin >> num >> riff;
        int num2=num/2;
        og = new long long int [num] ;
        for (int j = 0; j < num; j++) { //initialise
            og[j] = (j + 1 );


        }
//riffle
        cout << " \n";
        
        for (int k = 1; k <= riff; k++)
        {
            temp = new  long long int [num];

            for (int i = 0, j = 0; i < num2; i++, j += 2)

            {

                temp[i] = og[j];
                temp[(num2) + i] = og[j + 1];
            }


            og = temp;

  if (temp[1] == 2 ) {         
        riff = riff % k;
                     
                    k=0;
                    continue;
            } 
        
           }
        for (int j = 0; j < num; j++) {

            cout << og[j] << " ";
        }

        cout << endl;




    }

    return 0;

}


