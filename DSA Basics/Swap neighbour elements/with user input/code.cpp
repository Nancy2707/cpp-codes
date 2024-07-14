
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
    int arr[1000];
    int arrSize;
    std::cout<<"Enter the number of elements of an array:";
    std::cin>>arrSize;
    std::cout<<"enter the elements of the array:";
    for(int i=0;i<arrSize;i++){
        std::cin>>arr[i];
    }
    swapAlternate(arr,arrSize);
    printArray(arr,arrSize);
   
    return 0;
}
