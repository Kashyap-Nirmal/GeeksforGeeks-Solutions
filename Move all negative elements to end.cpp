/*
	https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1/?page=1&difficulty[]=0&curated[]=1&curated[]=7&curated[]=2&sortBy=latest#
	Done
	3/5/2022
*/
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int i;
        bool flag=true;
        vector<int> positive;
        vector<int> negative;
        for(i=0;i<n;i++)
        {
            if(arr[i]<0)
                negative.push_back(arr[i]);
            else
                positive.push_back(arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(i<positive.size())
                arr[i] = positive[i];
            else
                arr[i] = negative[i-positive.size()];
        }
        /*
        while(flag)
        {
            flag=false;
            for(i=0;i<n-1;i++)
            {
                if(arr[i]<0 && arr[i+1]>=0)
                {
                    swap(arr[i],arr[i+1]);
                    flag=true;
                }
            }
        }
        */
    }
};