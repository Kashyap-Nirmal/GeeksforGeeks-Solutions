/*	
	https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1	
	260621
*/
Node* deleteMid(Node* head)
{
    Node*temp=head;
    int i=0,n;
    for(i=0;temp!=NULL;i++,temp=temp->next);
    temp=head;
    n=i;
    if(n==1)
        return NULL;
    for(i=0;i<n/2-1;i++,temp=temp->next);
    temp->next=temp->next->next;
    temp=head;
    return temp;
}