/*
	https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1#
	030621
	Must do new
*/
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int *arr, int n){
        int i=0,temp;
        for(i=0;i<n-1;)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i+=2;
        }
    }
};