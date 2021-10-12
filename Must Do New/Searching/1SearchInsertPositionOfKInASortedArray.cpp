/*
	https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1/#
	060621
	Must do new
*/
class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int i=0,left=0,right=N-1,mid;
        if(k>Arr[right])
            return right+1;
        else if(k==Arr[right])
            return right;
        else if(k<=Arr[left])
            return left; 
        for(i=0;i<log(N)/log(2);i++)
        {
            mid=(left+right)/2;
            if(Arr[mid]==k | (mid!=0 && k>Arr[mid-1] && k<Arr[mid]))
                return mid;
            if(k>Arr[mid])
                left=mid;
            else
                right=mid;
        }
    }
};