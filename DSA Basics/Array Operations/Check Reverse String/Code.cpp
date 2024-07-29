#include <cstring>
bool checkReverse(char input1[], char input2[]) {
    int m = strlen(input1); 
    int n = strlen(input2);
    if (m != n) {
        return false; 
        }

    for (int i = 0; i < m; i++) {
        if (input1[i] != input2[m - 1 - i]) { 
                  return false;
        }
    }

    return true;
}
