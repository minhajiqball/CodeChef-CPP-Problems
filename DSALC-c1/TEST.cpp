#include <iostream>
#include<vector>
using namespace std;

int main() {
    int a;
vector<int> g;
  
   while(a!=42){
       cin>>a;
       g.push_back(a);
   }
   for(int i=0; i<g.size()-1;i++)
   {
       cout<< g[i]<<"\n";
   }

   
	return 0;
}
