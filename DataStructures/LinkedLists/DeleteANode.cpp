/*
 Delete Node at a given position in a linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Delete(Node *head, int position)
{
    // Complete this method
    if (position == 0)
    {
        head = head->next;
        return head;
    }
    Node* tmp = head;
    for (int i = 1; i < position; i++)
        tmp = tmp->next;
    tmp->next = tmp->next->next;
    return head;
}
