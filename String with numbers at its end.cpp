/*
	260721
	https://practice.geeksforgeeks.org/problems/string-with-numbers-at-its-end5749/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&company[]=Codenation&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Codenation#
	Done.
	Codenation
	NOTE:	Abort signal from abort(3) (SIGABRT)
				This is due to the stoi function. This does not work with a very large 
				number.
	[Be careful while using stoi()]
*/
class Solution{
public:	
	int isSame(string s)
	{
	    int i=0,ans=0,cnt=0,n=0;
	    string num="";
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]<48 || s[i]>57)
	            cnt++;
	        else if(s[i]>=48 && s[i]<=57)
	            num+=s[i];
	    }
	    for(int i = 0; i < num.length(); i++){
            n = n * 10 + num[i] - '0';
        }
        if(n==cnt)
            ans=1;
	    return ans;
	}
};