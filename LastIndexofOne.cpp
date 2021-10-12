/*
Must do coding questions
https://practice.geeksforgeeks.org/problems/last-index-of-15847/1
15-02-2021
Submitted
*/

class Solution{
    public:
    int lastIndex(string s)
    {
        int temp=0,iter=0,flag=0;
        for(iter=0;s[iter]!='\0';iter++)
        {
            if(s[iter]=='1')
            {
                flag=1;
                temp=iter;
            }
        }
        if(flag==0)
        temp=-1;
        return temp;
    }
};
// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
return 0;
} // } Driver Code Ends
