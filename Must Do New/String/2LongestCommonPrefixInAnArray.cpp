/*
	https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1#
	040621
	Must do new
*/
class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        int i=0,j=0,k=0,size_arr=arr[0].length();
        for(i=0;i<N;i++)
            if(size_arr > arr[i].length())
            {
                j=i;
                size_arr=arr[i].length();
            }
        for(i=0;i<N;i++)
        {
            for(k=0;k<size_arr;k++)
            {
                if(arr[j][k]!=arr[i][k])
                {
                    size_arr=k;
                    break;
                }
            }
        }
        if(size_arr==0)
            return "-1";
        else
            return arr[j].substr(0,size_arr);
    }
};