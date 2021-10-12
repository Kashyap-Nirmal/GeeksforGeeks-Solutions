/*
	https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
	260621
	At first was getting TLE and Seg faults.
*/
Node* reverseDLL(Node * head)
{
    Node *temp1,*temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp->next;
        temp->next=temp->prev;
        temp->prev=temp1;
        temp=temp->prev;
    }
    temp->next=temp->prev;
    temp->prev=NULL;
    return temp;
}