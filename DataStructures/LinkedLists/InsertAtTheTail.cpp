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
    if (head == NULL)
    {
        head = new Node();
        head->data = data;
        head->next = NULL;
    }
    else
    {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new Node();
        tmp = tmp->next;
        tmp->data = data;
        tmp->next = NULL;
    }
    return head;
}
