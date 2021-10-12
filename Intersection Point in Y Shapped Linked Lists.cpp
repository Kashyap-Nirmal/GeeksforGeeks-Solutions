/*
	https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazon#	
	010821
	Done. (Solved on my own. Same que from HackerRank)
	Amazon
*/

int intersectPoint(Node* head1, Node* head2)
{
    Node * temp1=head1,*temp2=head2;
    int cnt1=0,cnt2=0,i;
    while(temp1)
    {
        cnt1++;
        temp1=temp1->next;
    }
    while(temp2)
    {
        temp2=temp2->next;
        cnt2++;    
    }
    if(cnt1<cnt2)
    {
        temp1=head2;
        temp2=head1;
    }
    else
    {
        temp1=head1;
        temp2=head2;
    }
    for(i=0;i<abs(cnt2-cnt1);i++)
        temp1=temp1->next;
    while(temp2)
    {
        if(temp1==temp2)
            return temp1->data;
        temp1=temp1->next;
        temp2=temp2->next;
    }
}