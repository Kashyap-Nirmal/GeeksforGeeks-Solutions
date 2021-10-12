/*
	https://practice.geeksforgeeks.org/problems/selection-sort/1#
	030621
	Must do new
*/
class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        int j=0,temp,ind=i;
        for(j=i+1;j<n;j++)
            if(arr[ind]>arr[j])
                ind=j;
        swap(&arr[i],&arr[ind]);
    }
     
    void selectionSort(int arr[], int n)
    {
        int i=0;
        for(i=0;i<n;i++)
            select(arr,i,n);
    }
};