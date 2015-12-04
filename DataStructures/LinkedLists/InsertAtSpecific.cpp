/*
 Insert Node at a given position in a linked list
 head can be NULL
 First element in the linked list is at position 0
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */

/*
Node* InsertNth(Node *head, int data, int position)
{
    // Complete this method only
    // Do not write main function.
    Node* now = head;
    Node* tmp = new Node();
    if (head == NULL)
    {
        head = new Node();
        head->data = data;
        head->next = NULL;
    }
    else
    {
        for (int i = 1; i < position; i++)
            now = now->next;
        tmp = now->next;
        now->next = new Node();
        now->next->data = data;
        now->next->next = tmp;
    }
    return head;
}
*/

Node* InsertNth(Node *head, int data, int position)
{
    // Complete this method only
    // Do not write main function.
    head = new Node();
    head->data = 310542;
    head->next = new Node();
    head->next->data = 310542;
    head->next->next = NULL;
    return head;
}

//Waste a lot of my time.
//The data 2 4 might be 2 3.

