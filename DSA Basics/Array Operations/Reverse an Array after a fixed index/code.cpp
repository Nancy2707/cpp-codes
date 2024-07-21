void reverseArray(vector<int> &arr , int m) {
   int start=m+1,end=arr.size()-1;
   
   while(start<=end){
           swap(arr[start], arr[end]);
           start++;
           end--;
       }
   }    	
