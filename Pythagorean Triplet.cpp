/*
	https://practice.geeksforgeeks.org/problems/pythagorean-triplet3018/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=14&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage14sortBysubmissionscompany[]Amazon#submission
	010821
	Done
	Amazon	
*/

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    int i=0,a,b,c,sqr[n],k;
        bool ans=false;
	    for(i=0;i<n;i++)
	        sqr[i]=arr[i]*arr[i];
        sort(sqr,sqr+n);
        for(i=0;!ans && i<n-2;i++)
        {
            k=sqr[i]+sqr[i+1];
            if(binary_search(sqr, sqr + n, k))
                ans=true;
        }
        return ans;
	}
};