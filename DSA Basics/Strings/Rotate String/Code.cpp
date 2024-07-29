#include<string.h>
void rotateStringByNChars(char input[], int n) {
     int size = strlen(input);
    char output[size + 1]; 
    output[size] = '\0';
    n = n % size;
   //  if (n < 0) {
   //      n += size;
   //  }
    for (int i = 0; i < size; i++) {
        output[(i + n) % size] = input[i];
    }
    strcpy(input, output);
    
}
