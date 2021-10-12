/*
	https://practice.geeksforgeeks.org/problems/insertion-sort/1
	030621
	Must do new
*/
class Solution
{
    public:
    void insert(int arr[], int i)
    {
        int j=0,temp;
        for(j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else 
                break;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int i=0;
        for(i=1;i<n;i++)
            insert(arr,i);
    }
};