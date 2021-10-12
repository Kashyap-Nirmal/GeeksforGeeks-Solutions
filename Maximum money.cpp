/*
	https://practice.geeksforgeeks.org/problems/maximum-money2855/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=13&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage13sortBysubmissionscompany[]Amazon
	010821
	Done
	Amazon
*/

class Solution {
  public:
    int maximizeMoney(int N , int K) {
        return K*ceil(N/2.0);
    }
};