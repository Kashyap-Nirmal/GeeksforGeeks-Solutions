/*
	https://practice.geeksforgeeks.org/problems/rotation4723/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=14&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage14sortBysubmissionscompany[]Amazon
	010821	
	Done
	Amazon
*/
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int i=0,cnt=0;
	    for(i=0;i<n-1;i++)
	        if(arr[i]>arr[i+1])
	            cnt=i+1;
	    return cnt;
	}

};
