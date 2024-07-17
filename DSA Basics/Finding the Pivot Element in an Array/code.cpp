#include <iostream>
#include <vector>

using namespace std;

int findPivot(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
  if(arr[mid]>arr[mid+1]){
      return arr[mid+1];
  }
  else if(arr[mid]>=arr[mid-1]){
      low = mid + 1;
  }
  else{
      high = mid;
  }
}
    return arr[low];
}
int main() {
    vector<int> arr = {4, 5, 6, 7, 8, 1, 2};
    
    int pivot = findPivot(arr);
    cout << "Pivot element: " << pivot << endl;
    
    return 0;
}
