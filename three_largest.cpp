#include<iostream>
using namespace std;
 int printlargest(int arr[] ,int n){
     int first , second , third ;
    
     // l
       if( arr[n]<3){

          printf("invalid"); 
           return 0;
       }
         third = second = first=INT16_MIN;
         for (int i = 0; i < n; i++)
         {
         if(arr[i]>first){
            third=second;
            second=first;
            first= arr[i];

         }
         if(arr[i]>second && arr[i]!=first){
             third=second;
             second=arr[i];
         }
        else if  (arr[i]> third && arr[i]!=second && arr[i]!=first )

                third =arr[i];
         }
         
          cout<<" largest" <<  first   << endl  << second << endl  << third <<  endl  << endl  ;
         
 }
 
 int main() {
      int arr[] = { 23 ,95 ,1 , 45 ,78};
       int n = 4;
        printlargest( arr ,n);
         

    
 }

