#include<iostream>
using namespace std;

void swap(int &a, int &b) {     //swap the content of a and b
   int t;
   t = a;
   a = b;
   b = t;
}

void display(int *a, int n) {
   for(int i = 0; i<n; i++)
      cout << a[i] << "\n";
}

void merge(int *a, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; 
   nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = a[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = a[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         a[k] = larr[i];
         i++;
      }else{
         a[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      a[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      a[k] = rarr[j];
      j++; k++;
   }
}

void mergeSort(int *a, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(a, l, m);
      mergeSort(a, m+1, r);
      merge(a, l, m, r);
   }
}
int main() {
   int n;
   cin >> n;
   int arr[n];     //create an array with given number of elements
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   display(arr, n);
   return 0;
}
