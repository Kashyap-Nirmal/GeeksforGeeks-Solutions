/*
	https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
	Bhavin's soln modified [JAVA Soln]
	Day 2
	160921	
*/
class Solution 
{
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    public static int maxMeetings(int start[], int end[], int n)
    {
        // add your code here
        int [][]arr=new int[n][2];
        for(int i=0;i<n;i++)
        {
            arr[i][0]=start[i];
            arr[i][1]=end[i];
        }
        Arrays.sort(arr,(a,b)->Integer.compare(a[1],b[1]));
        int cnt=1,i,j=0;
        for(i=1;i<n;i++)
        {
            if(arr[j][1]<arr[i][0])
            {
                //System.out.println(arr[j][1]+" "+arr[i][0]);
                cnt++;
                j=i;
            }
        }
        return cnt;
    }
}