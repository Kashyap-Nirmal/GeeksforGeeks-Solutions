/*
	230721
	https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1/?problemType=functional&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=1&sortBy=submissions&company[]=Codenation&company[]=Infosys&query=problemTypefunctionaldifficulty[]-2difficulty[]-1difficulty[]0difficulty[]1difficulty[]2page1sortBysubmissionscompany[]Codenationcompany[]Infosys
	Infosys,..
*/
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long a=1,b=0,c=0,i;
        vector<long long> fib;
        for(i=0;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            fib.push_back(c);
        }
        return fib;
    }
};