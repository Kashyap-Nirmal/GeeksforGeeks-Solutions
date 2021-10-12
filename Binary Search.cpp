/*
	https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1/?problemType=functional&page=1&sortBy=submissions&company[]=Infosys&query=problemTypefunctionalpage1sortBysubmissionscompany[]Infosys#
	Done
	080821
	Infosys
*/
class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int left=0,right=n-1,mid,i;
        mid=(left+right)/2;
        if(arr[left]==k)
            return left;
        else if(arr[right]==k)
            return right;
        else if(k<arr[left] || k>arr[right])
            return -1;
        for(i=0;i<n;i++)
        {
            //cout<<arr[left]<<" "<<arr[right]<<" "<<arr[mid]<<" "<<mid<<"\n";
            if(k>arr[mid])
                left=mid;
            else if(k<arr[mid])
                right=mid;
            else if(k==arr[mid])
                return mid;
            mid=(left+right)/2;    
        }
    }
};