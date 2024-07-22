// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int CountFunc(char name[]){
    int count = 0;
    for(int i = 0;name[i]!='\0';i++)
        count++;
    
    return count;
}
char* Reverse(char name[], int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        swap(name[start++],name[end--]);
    }
    return name;
}
int main() {
    char name[20];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    int size=CountFunc(name);
    cout<<"Your name's length is: "<<size<<endl;;
    cout<<"Your name's reverse is: "<<Reverse(name,size);
    return 0;
}
