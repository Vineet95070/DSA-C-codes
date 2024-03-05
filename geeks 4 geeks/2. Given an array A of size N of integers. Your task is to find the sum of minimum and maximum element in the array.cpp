//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int max = A[0], min = A[0];
    	for(int i=0; i<N; i++){
    	    
    	    if(max<=A[i]){
    	        max = A[i];
    	    }
    	    if(min >= A[i]){
    	        min = A[i];
    	    }
    	}
    	return max+min;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends