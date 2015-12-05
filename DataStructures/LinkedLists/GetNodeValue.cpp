/*
 Get Nth element from the end in a linked list of integers
 Number of elements in the list will always be greater than N.
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
int GetNode(Node *head,int positionFromTail)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    int len = 0, data[11111];
    while (head)
    {
        data[len++] = head->data;
        head = head->next;
    }
    len -= positionFromTail + 1;
    return data[len];
}
