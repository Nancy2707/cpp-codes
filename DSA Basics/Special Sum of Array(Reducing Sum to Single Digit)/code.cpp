#include <bits/stdc++.h> 
int reduceToSingleDigit(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int specialSum(vector<int>& arr, int n){
    int sum = 0;
    for (int n : arr) {
        sum += n;
    }
    return reduceToSingleDigit(sum);
}
