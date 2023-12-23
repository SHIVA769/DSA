
#include <iostream >
#include<algorithm>
 using namespace std;
  
  void printlargest(int arr[], int n){
      // sorting   o long(o)
        sort (arr ,arr+n);

   int check = 0, count = 1;
    for (int i = 1; i <= n; i++) {
        if (count < 4) {
            if (check ! arr[n - i]) {
                // to handle duplicate values
                cout << arr[n - i] << " ";
                check = arr[n - i];
                count++;
            }
        
    }
      else
       break;
    }  
      
  }
   
  /**
  #include <iostream >
#include<algorithm>
 using namespace std;
  
  void printlargest(int arr[], int n){
    sort(arr, arr + n); // It uses Tuned Quicksort with
    // avg. case Time complexity = O(nLogn)
 
    int check = 0, count = 1;
    for (int i = 1; i <= n; i++) {
        if (count < 4) {
            if (check != arr[n - i]) {
                // to handle duplicate values
                cout << arr[n - i] << " ";
                check = arr[n - i];
                count++;
            }
        }
        else
            break;
    }
}
*/
   
 int main() {
      int arr[] = {  12, 45, 1, -1, 45, 54, 23, 5, 0, -10};
       int n = 6;
        printlargest( arr ,n);
         

    
 }
