#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
      for (int Col = 0; Col < mCols; Col++) {
        if (Col & 1) {
            for (int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][Col]);
            }
        } else {
            for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][Col]);
            }
        }
    }
    return ans;
}
