//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> find(int arr[], int n, int x)
    {
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] == x)
            {
                count++;
                if (count == 1)
                {
                    ans.push_back(i);
                }
            }
        }
        if(count == 0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(ans[0]+count-1);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int n = 6, x = 6;
    int arr[n] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };

    vector<int> ans;
    Solution ob;
    ans = ob.find(arr, n, x);
    cout << ans[0] << " " << ans[1] << endl;
    // }
    return 0;
}

// } Driver Code Ends