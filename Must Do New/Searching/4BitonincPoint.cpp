/*
	https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1
	060621
	Must do new
*/
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int left=0,right=n,mid=0,i;
	    for(i=0;i<log(n)/log(2);i++)
	    {
	        mid=(left+right)/2;
	        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1] || mid==n-1 && arr[mid]>=arr[mid-1])
	            return arr[mid];
	        if(arr[mid-1]>arr[mid])
	            right=mid;
	        else if(arr[mid-1]<arr[mid])
	            left=mid;
	    }
	    return arr[mid];
	}
};