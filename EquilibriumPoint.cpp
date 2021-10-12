/*
Must do coding
https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1#
15-02-2021
Submitted
*/
//Driver code

// Function to find equilibrium point in the array.
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    // Your code here
    int sum=0,i=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        a[i]=sum;
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i-1]==a[n-1]-a[i])
            return i+1;
    }
    if(n==1)
        return 1;
    if(i==n-1)
        return -1;
}
