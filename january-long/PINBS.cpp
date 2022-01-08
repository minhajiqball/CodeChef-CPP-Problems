#include <iostream>
#include<string>
using namespace std;

int myStr(string str){
    string str1 ="10", str2 ="11";
   {   size_t found = str.find(str1);
    if (found != string::npos){ 
    return 1;
}
  size_t found1 = str.find(str2);
    if (found1 != string::npos){ 
    return 1;
}
}
return -1;

}

int main() {
    int t;

 string str;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
   cin>>str;
   int c =myStr(str);
   if(c>0){
    cout<<"YES"<<endl;

   }else{
    cout<<"NO"<<endl;
   }
    }
    return 0;

}
