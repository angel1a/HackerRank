/*
 Reverse a linked list and return pointer to the head
 The input list will have at least one element
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Reverse(Node *head)
{
    // Complete this method
    Node* ans = new Node();
    Node* tmp = ans;
    int len = 0, database[11111];
    while (head)
    {
        database[len++] = head->data;
        head = head->next;
    }
    for (int i = len - 1; i > 0; i--)
    {
        ans->data = database[i];
        ans->next = new Node();
        ans = ans->next;
    }
    ans->data = database[0];
    ans->next = NULL;
    return tmp;
}
