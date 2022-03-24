/*
	https://practice.geeksforgeeks.org/problems/change-the-string3541/1/?page=1&company[]=Oracle&sortBy=accuracy#
	Done
	23/3/2022
*/
class Solution{
    public:
    
    string modify (string s)
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' && s[0]>='A' && s[0]<='Z')
                s[i]-=32;
            else if(s[i]>='A' && s[i]<='Z' && s[0]>='a')
                s[i]+=32;
        }
        return s;
    }
};
