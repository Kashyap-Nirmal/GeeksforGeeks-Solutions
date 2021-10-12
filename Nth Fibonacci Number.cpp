/*
	https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=12&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage12sortBysubmissionscompany[]Amazon#
	010821
	Amazon
	Done	
*/
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int a=1,b=0,c,i,mod;
        mod=pow(10,9)+7;
        for(i=0;i<n;i++)
        {
            c=(a+b) % mod;
            a=b % mod;
            b=c % mod;
        }
        return c;
    }
};