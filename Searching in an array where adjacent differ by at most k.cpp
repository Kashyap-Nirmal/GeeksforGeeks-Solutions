/*
	https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1/?page=1&difficulty[]=0&curated[]=1&curated[]=7&curated[]=2&sortBy=accuracy#
	Done
	4/5/2022
*/
int search(int arr[], int n, int x, int k)
{
    int i = 0;
    for( i = 0; i < n ; i++)
    {
        if( arr[i] == x)
            return i;
    }
    return -1;
}  