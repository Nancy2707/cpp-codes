int findDuplicate(vector<int> &arr) 
{
   int n = arr.size();
    int expected_sum = (n * (n - 1)) / 2; 
        int actual_sum = 0;

    for (int num : arr) {
        actual_sum += num;
    }
    return actual_sum - expected_sum;
}
