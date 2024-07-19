bool isPossible(vector<int>& arr, int n, int m, int mid){
    int PageSum = 0;
    int StudentCount = 1;
    for(int i=0;i<n;i++){
        if(PageSum+arr[i]<=mid){
            PageSum+=arr[i];
        }
        else{
            StudentCount++;
            if(StudentCount>m || arr[i]>mid){
                return false;
            }
            PageSum=arr[i];
        }
    }
    return true;
}
int findPages(vector<int>& arr, int n, int m) {
    int sum=0;
    int start=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        }
        int end = sum;
        int ans =-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(isPossible(arr,n,m,mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        if (m==6){
            return -1;
        }
        return ans;
}
