/*	
	https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/?page=1&query=page1#
	250721
*/

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int ans=0,i=0;
        for(i=0;i<arr.size();i++)
            ans=max(ans,arr[i]);
        return ans;        
    }
};