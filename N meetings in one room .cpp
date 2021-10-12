/*
	https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
	Darshan's soln
	Day 2
	160921
	/*
		Logic:
			Sort by end times.
			Compare that start time of current meet is greater than previous meet and add.
		! DONT USE MAP. USING MAP YOU WILL LOOSE PAIRS DUE TO REPEATING VALUES.
*/
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> meet;
        for(int i = 0; i < n; i++)
            meet.push_back({end[i], start[i]});
        sort(meet.begin(), meet.end());
        //cout<<meet[0].second<<" "<<meet[0].first<<"\n";
        int ans = 1;
        int lastEnd = meet[0].first;
        for(int i = 1; i < n; i++)
        {
            if(meet[i].second > lastEnd)
            {
                //cout<<meet[i].second<<" "<<meet[i].first<<"\n";
                ans++;
                lastEnd = meet[i].first;
            }
        }
        return ans;
    }
};