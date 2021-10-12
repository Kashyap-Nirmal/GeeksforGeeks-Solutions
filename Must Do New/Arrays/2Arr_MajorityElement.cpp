/*
    Must do New
    080521
    https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#
*/
class Solution{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
int majorityElement(int a[], int size)
    {
        //Be careful about cnt and j.
        /*
            Logic:
                Sort.
                Compare element by element. Make a counter.
                When a[i]<a[j] i.e. after 1,1,2,...
                So a[1]<a[2]. Here we want to re initialize the count.
                But be careful about initializing the count.
        */
        int i=0,ans=-1,j=0,cnt=0;
        sort(a, a + size);
        for(j=0;j<size;){
            if(a[i]==a[j])
                cnt++;
            //cout<<i<<" "<<j<<" "<<a[i]<<" "<<a[j]<<" "<<cnt<<"\n";
            if(cnt>size/2){
                ans=a[i];
                break;
            }
            if(a[i]<a[j]){
                i++;
                j--;
                cnt=0;
            }
            j++;
        }
        return ans;
    }
};
