/*
	https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#
	100821
	Done
*/
string isSubset(int a1[], int a2[], int n, int m) {
    int i=0,j;
    string ans="Yes";
    for(i=0;ans=="Yes" && i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a2[i]==a1[j])
                break;
            else if(a2[i]!=a1[j] && j==n-1)
                ans="No";
        }
    }
    return ans;
}