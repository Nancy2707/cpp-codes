
#include <iostream>
using namespace std;
int FirstOcc(int arr[], int n, int key){
    int start = 0, end = n-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1; // Continue searching in the left half
        }
        else if(arr[mid] > key){
            end = mid - 1; // key is in the left half
        }
        else if(arr[mid] < key){
            start = mid + 1; // key is in the right half
        }
    }
    return ans;
}

int LastOcc(int arr[], int n, int key){
    int start = 0, end = n-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1; // Continue searching in the right half
        }
        else if(arr[mid] > key){
            end = mid - 1; // key is in the left half
        }
        else if(arr[mid] < key){
            start = mid + 1; // key is in the right half
        }
    }
    return ans;
}
 int main() {
     int even[5] = {1,2,3,3,5};
     cout << "First Occurance of 3 is: "<<FirstOcc(even,5,3)<<endl;
     cout << "Last Occurance of 3 is: "<<LastOcc(even,5,3)<<endl;
     
    return 0;
}
