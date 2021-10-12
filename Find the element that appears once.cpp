/*
	260721
	https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1/?problemType=functional&page=1&sortBy=submissions&company[]=Codenation&query=problemTypefunctionalpage1sortBysubmissionscompany[]Codenation#
	Done
	Codenation
*/

class Solution{
public:	
	int search(int A[], int N){
	    int i=0,temp,temp1=-1;
	    for(i=0;i<N;i++)
	    {
            temp=A[i];
	        if(temp==A[i+1] || temp1==temp)
	            i++;
	        else
	            break;
	        temp1=temp;
	    }
	    return temp;
	}
};