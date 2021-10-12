/*
	https://practice.geeksforgeeks.org/problems/prime-number2314/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=14&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage14sortBysubmissionscompany[]Amazon#
	010821
	Done
	Amazon
*/

class Solution{
public:
    int isPrime(int N){
        int i,flag=1;
        if(N==1)
            flag=0;
        for(i=2;i<=sqrt(N) && flag;i++)
            if(N % i ==0)
                flag=0;
        return flag;
    }
};