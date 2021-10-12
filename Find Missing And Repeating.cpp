/*
	https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
	220821
	Striver's list Day 1
	Done
*/
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int* temp=arr;
        int temp1,ans[2]={0,0},*ans1=&ans[0];
        sort(temp,temp+n);    
        temp1=*temp;
        if(*temp!=1)
            ans[1]=1;
        else if(*(temp+n-1)!=n)
            ans[1]=n;    
        temp++; 
        for(int i=0;i<n && (!ans[0] || !ans[1]);i++)
        {
            //cout<<temp1<<" "<<*temp<<"\n";
            if(*temp-temp1==2 && !ans[1])
            {
                //cout<<"EI ";
                ans[1]=++temp1;
            }
            if(temp1==*temp)
            {
                //cout<<"I2\n";
                ans[0]=*temp;
            }
            temp1=*temp;
            temp++;
        }
        return ans1;
    }
};