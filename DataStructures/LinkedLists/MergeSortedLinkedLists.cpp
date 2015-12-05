/*
 Merge two sorted lists A and B as one linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* MergeLists(Node *headA, Node* headB)
{
    // This is a "method-only" submission.
    // You only need to complete this method
    Node* ans = new Node();
    Node* tmp = ans;
    Node* prev = ans;
    while (headA && headB)
    {
        if (headA->data < headB->data)
        {
            tmp->data = headA->data;
            prev = tmp;
            tmp->next = new Node();
            headA = headA->next;
            tmp = tmp->next;
        }
        else
        {
            tmp->data = headB->data;
            prev = tmp;
            tmp->next = new Node();
            headB = headB->next;
            tmp = tmp->next;
        }
    }
    while (headA)
    {
        tmp->data = headA->data;
        prev = tmp;
        tmp->next = new Node();
        headA = headA->next;
        tmp = tmp->next;
    }
    while (headB)
    {
        tmp->data = headB->data;
        prev = tmp;
        tmp->next = new Node();
        headB = headB->next;
        tmp = tmp->next;
    }
    prev->next = NULL;
    return ans;
}
