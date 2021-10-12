/*
	https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
	040621
	Must do new
*/
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int j=0,k=0;
        vector<string> s1;
        for(int i=0;i<=S.length();i++)
        {
            if(S[i]=='.')
            {
                k=i;    
                s1.push_back(S.substr(j,k-j));
                j=k+1;
            }
        }
        k=S.length();
        s1.push_back(S.substr(j,k-j));
        vector<string>::iterator ptr;
        S="";
        for(int i=s1.size()-1;i>=0;i--)
            S+=s1[i]+'.';
        S[S.length()-1]='\0';
        return S;
    } 
};