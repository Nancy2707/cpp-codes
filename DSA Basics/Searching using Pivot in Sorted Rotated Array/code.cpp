int findPivot(vector<int>& arr, int n) {
    int low = 0;
    int high = n - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    
    return low;
}

int binarySearch(vector<int>& arr, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1; 
}
int search(vector<int>& arr, int n, int k) {
    int pivot = findPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k); 
        } else {
        return binarySearch(arr, 0, pivot - 1, k); 
        }
}
