#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
int low = 0, mid = 0, high = n - 1;
while(mid<=high){
   if(arr[mid]==0){
      swap(arr[mid++],arr[low++]);
   }
   else if(arr[mid]==2){
      swap(arr[high--],arr[mid]);
   }
   else{
      mid++;
   }
}
}
