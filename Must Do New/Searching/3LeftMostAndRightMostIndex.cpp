/*
	https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1#
	040621
	Must do new
*/
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long long i=0,left=0,N=v.size(),right=N-1,mid;
        mid=(left+right)/2;
        if(x>v[right]  || x<v[left])
        {
            pair<long, long> ans(-1, -1);
            return ans;
        }
        for(i=0;i<=log(N)/log(2);i++)
        {
            if(x<v[mid])
                right=mid;
            else if(x==v[mid])
            {
                right=mid;
                break;
            }
            else
                left=mid+1;
            mid=(left+right)/2;
        }
        for(i=right;i<N;i++)
            if(v[i]>v[right])
            {
                right=i-1;
                break;
            }
            else if(v[i]==v[right])
                right=i;
        for(i=right;i>-1;i--)
            if(v[i]<v[right])
            {
                left=i+1;
                break;
            }
            else if(v[i]==v[right])
                left=i;
        if(v[left]!=x || v[right]!=x)
        {
            left=-1;
            right=-1;
        }
        pair<long, long> ans(left, right);
        return ans;
    }
};