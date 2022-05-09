/*
	https://practice.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1/?page=1&difficulty[]=0&curated[]=1&curated[]=7&curated[]=2&sortBy=latest#
	Done. Saw the topic tag for hint.
	3/5/2022
*/
class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long sum=0;
        for(int i=0;i<N;i++)
            sum+=abs(A[i]-B[i]);
        return sum;
    }
};