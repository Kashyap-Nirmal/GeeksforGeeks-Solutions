/*
	https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1#
	110621
	Editorial
	Practice How to pick a category
*/
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> vec_r,vec;
        int i=0,max_=a[n-1];
        vec_r.insert(vec_r.end(),max_);
        for(i=n-2;i>-1;i--)
            if(a[i]>=max_)
            {
                max_=a[i];
                vec_r.insert(vec_r.end(),max_);
            }
        for(i=vec_r.size()-1;i>-1;i--)
            vec.push_back(vec_r[i]);
        return vec;
        /*
            My code. TLE
        vector<int> vec;
        int i=0,j=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;a[i]>=a[j] & j<n;j++);
            if(j==n)
                vec.insert(vec.end(),a[i]);
        }
        vec.insert(vec.end(),a[n-1]);
        return vec;
        */
    }
};