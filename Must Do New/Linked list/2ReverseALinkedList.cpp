/*
	https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
	240621	
	Must do new
	Editorial
*/
class Solution
{
    public:
    //Function to reverse a linked list.
     struct Node* reverseList(struct Node *head)
    {
        if(head==NULL)
            return NULL;
        //Three pointers to store the current, previous and next nodes.
        struct Node *prev = NULL;   
        struct Node *current = head;
        struct Node *next= current->next;
        while(current!=NULL)
        {
            //taking the next node as next.
            next=current->next;
            //storing the previous node in link part of current node.
            current->next=prev; 
            //updating prev from previous node to current node.
            prev=current; 
            //updating current node to next node.
            current =next;        
        }
        return prev;
    }
    
    /*
        //My Code :
    
    struct Node* reverseList(struct Node *head)
    {
        struct Node* temp=head;
        struct Node* temp1=head;
        int i=0,j=0,cnt=0,temp2;
        for(cnt=1;temp->next!=NULL;cnt++,temp=temp->next);
        temp1=temp;
        temp=head;
        temp2=temp1->data;
        temp1->data=temp->data;
        temp->data=temp2;
        temp=temp->next;
        for(i=1;i<cnt/2;i++,temp=temp->next)
        {
            temp1=head;
            for(j=0;j<cnt-1-i;j++,temp1=temp1->next);
            temp2=temp1->data;
            temp1->data=temp->data;
            temp->data=temp2;
        }
        return head;
    }
    */
};