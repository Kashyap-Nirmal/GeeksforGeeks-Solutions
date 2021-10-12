/*
	270721
	https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1#
	Done.
*/
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node* temp=head,*temp1,*temp2;
        int i=0,cnt=0;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        if(k==cnt)
            return head;
        temp=head;
        for(i=0;i<k && temp->next;i++)
            temp=temp->next;
        temp1=head;
        temp2=temp1;
        head=temp;
        for(i=1;i<k && temp1->next ;i++)
            temp1=temp1->next;
        temp1->next=NULL;
        while(temp->next)
            temp=temp->next;
        temp->next=temp2;
        return head;
    }
};