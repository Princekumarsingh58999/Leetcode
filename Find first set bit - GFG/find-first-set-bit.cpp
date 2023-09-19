//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        if(n==0)
        return 0;
        int ans=0;
        vector<int>v;
        while(n!=0){
            v.push_back(n%2);
            n=n/2;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
            ans=i;
            break;
        }
        }
        return ans+1;
        // Your code here
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends