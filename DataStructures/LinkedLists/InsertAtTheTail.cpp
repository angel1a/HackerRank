/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Insert(Node *head,int data)
{
    // Complete this method
    Node* tmp = head;
    if (tmp)
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new Node();
        tmp = tmp->next;
        tmp->data = data;
        tmp->next = NULL;
        
    }
    else
    {
        tmp->data = data;
        tmp->next = NULL;
    }
    return head;
}

