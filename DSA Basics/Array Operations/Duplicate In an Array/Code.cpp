#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
 int slow = arr[0];
    int fast = arr[arr[0]];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    fast = 0;
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}


