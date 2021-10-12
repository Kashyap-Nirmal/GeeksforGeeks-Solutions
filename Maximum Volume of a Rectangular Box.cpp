/*
	https://practice.geeksforgeeks.org/problems/maximum-volume-of-a-rectangular-box1500/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&company[]=TCS&company[]=Infosys&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]TCScompany[]Infosys#
	090821
	Solution
	Done
	TCS
*/

class Solution {
  public:
    long long getVol(int A, int B) {
        long double P = (long double)A;
        long double S = (long double)B;
        long double x = ((P*P)-(24.0 * S));
        long double L = (P-sqrt(x))/12.0 ;
        
        long double ans = ((S/2.0)*L)-((P/4.0)*(L*L))+(L*L*L);
        long long int Ans = floor(ans);
        return Ans;
        //return floor((B/6.0)*sqrt((B/6.0)));
    }
};