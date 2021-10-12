/*
	https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1#
	100621
	Must do new
*/
int getMiddle(Node *head)
{
    int i=0,cnt;
    Node* temp=head;
    for(cnt=0;temp!=NULL;temp=temp->next,cnt++);
    temp=head;
    for(i=0;i<cnt/2;temp=temp->next,i++);
    /*
        Here with the increment condition, both the increments for odd and even both counts is done.
    */
    return temp->data;
}