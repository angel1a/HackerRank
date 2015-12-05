/*
 Print elements of a linked list in reverse order as standard output
 head pointer could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
void ReversePrint(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    int len = 0, database[11111];
    while (head)
    {
        database[len++] = head->data;
        head = head->next;
    }
    for (int i = len - 1; i >= 0; i--)
        cout << database[i] << endl;
}
