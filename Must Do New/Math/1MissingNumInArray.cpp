/*
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
030621
Must do New
*/
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum=0;
        for(int i=0;i<n-1;i++)
            sum+=array[i];
        int ans=(n*n+n)/2-sum;
        return ans;
    }
};