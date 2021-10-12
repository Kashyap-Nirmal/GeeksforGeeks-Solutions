/*
	https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
	100821
	Done
*/
class Solution{
public:	
	int isPlaindrome(string S)
	{
	    int i=0,size_=S.size(),ans=1;
	    for(i=0;ans && i<size_/2;i++)
	    {
	        if(S[i]!=S[size_-i-1])
	            ans=0;
	    }
	    return ans;
	}
};