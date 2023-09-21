//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int>v;
        int p=0,q=0;
        int count=0, count1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x && count==0){
            p=i;
            count++;}
            if(arr[n-i-1]==x && count1==0){
            q=n-i-1;
            count1++;
        }}
        if(count==0 && count1==0){
       v.push_back(-1);
       v.push_back(-1);}
        v.push_back(p);
        v.push_back(q);
        return v;
        // code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends