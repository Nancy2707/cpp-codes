//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        char ch =str[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i =0; i <26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi = arr[i];
            
        }
    }
    char final_ans='a'+ans;
    return final_ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
