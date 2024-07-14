
#include <iostream>
void printArray(int arr[],int n){
    for(int i = 0; i < n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            std::swap(arr[i],arr[i+1]);
        }
    }
}
int main() {
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={2,3,4,5,6};
    swapAlternate(even,8);
    printArray(even,8);
    swapAlternate(odd,5);
    printArray(odd,5);

    return 0;
}
