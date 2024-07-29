int coverage(int **arr,int n,int m)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int totalCoverage = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 0) {
                int coverage = 0;

                // Check left
                if (j > 0 && matrix[i][j - 1] == 1) {
                    coverage++;
                }
                // Check right
                if (j < m - 1 && matrix[i][j + 1] == 1) {
                    coverage++;
                }
                // Check up
                if (i > 0 && matrix[i - 1][j] == 1) {
                    coverage++;
                }
                // Check down
                if (i < n - 1 && matrix[i + 1][j] == 1) {
                    coverage++;
                }

                totalCoverage += coverage;
            }
        }}
