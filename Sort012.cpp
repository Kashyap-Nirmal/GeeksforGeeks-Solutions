/*
	https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#
	150921
	Done.	
*/
class Solution
{
    public:
    void sort012(int a[], int n)
    {
		/*
			Logic:
				1.)Count 0's and 2's.
				2.)Initialize array to 0.
				3.)Fill 1's with 0+count_0.
				4.)Fill the remaining spaces with 2.				
				*/
        int iter,count_0=0,count_2=n,flag=0;
        for(iter=0;iter<n;iter++)
        {
            if(a[iter]==0)
                count_0++;
            else if(a[iter]==2)
                count_2--;
            a[iter]=0;
        }
        for(iter=0+count_0;iter<count_2;iter++)
            a[iter]=1;
        for(iter=count_2;count_2!=n-1 && iter<n;iter++)
            a[iter]=2;
    }
};