#include<bits/stdc++.h>
using namespace std; 
 int main(){
     vector<int>v ={ 12, 465, 1, -1, 45, 54, 23, 5, 0, -10 };
      partial_sort(v.begin() ,v.begin()+3 ,v.end() , greater<int>());
             cout<< v[0] <<endl;
               cout<< v[1] <<endl;
                 cout<< v[2] <<endl;
 }