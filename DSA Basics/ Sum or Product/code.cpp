#include <bits/stdc++.h> 
const int MOD = 1000000007;
long long int sumOrProduct(long long int n, long long int q)
{
   if (q == 1) {
        long long total_sum = (long long)n * (n + 1) / 2;
        return total_sum % MOD;
    } else if (q == 2) {
        long long product = 1;
        for (int i = 1; i <= n; ++i) {
            product = (product * i) % MOD;
        }
        return product;
    }
    return -1;
}
