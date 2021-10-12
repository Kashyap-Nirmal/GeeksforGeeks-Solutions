/*
	230721
	https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1/?problemType=functional&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&sortBy=submissions&company[]=Goldman%20Sachs&company[]=Codenation&company[]=Infosys&query=problemTypefunctionaldifficulty[]-2difficulty[]-1difficulty[]0difficulty[]1difficulty[]2page2sortBysubmissionscompany[]Goldman%20Sachscompany[]Codenationcompany[]Infosys#
	Goldman Sachs
*/
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        bool ans=true;
        int i=0;
        for(i=0;i<A.size() && ans;i++)
        {
            if(A[i]==B[i])
                continue;
            else
                return false;
        }
        return ans;
    }
};