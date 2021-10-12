/*
	https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#
	100821
	Done
*/
char* reverse(char *S, int len)
{
    stack<char> st;
    int i;
    for(i=0;i<len;i++)
        st.push(S[i]);
    for(i=0;i<len;i++)
    {
        S[i]=st.top();
        st.pop();
    }
    return S;
}