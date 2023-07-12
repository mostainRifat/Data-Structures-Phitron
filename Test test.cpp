#include <bits/stdc++.h>
using namespace std;
int deleteElementsInRange(int arr[], int n, int l, int r) {
   int i, newIndex = 0;
   for (i = 0; i < n; i++) {
      // adding updating element if it is not in the given range
      if (i <= l || i >= r) {
         arr[newIndex] = arr[i];
         newIndex++;
      }
   }
   // returing the updated index
   return newIndex;
}
int main() {
   int n = 9, l = 1, r = 6;
   int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   int updatedArrayLength = deleteElementsInRange(arr, n, l, r);
   for (int i = 0; i < updatedArrayLength; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
   return 0;
