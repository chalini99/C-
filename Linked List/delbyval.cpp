#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};



// Delete first occurrence of value
ListNode* deleteByValue(ListNode* head, int value)
{
    // Empty List
    if(head == NULL)
    {
        return NULL;
    }

    // Delete Head
    if(head->val == value)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Find previous node
    ListNode* temp = head;

    while(temp->next != NULL && temp->next->val != value)
    {
        temp = temp->next;
    }

    // Value Found
    if(temp->next != NULL)
    {
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    return head;
}

// Print List
void printList(ListNode* head)
{
    ListNode* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    ListNode* head = NULL;

    head = deleteByValue(head, 10);
    head = deleteByValue(head, 20);
    head = deleteByValue(head, 30);
    head = deleteByValue(head, 40);
    head = deleteByValue(head, 50);

    cout << "Original List: ";
    printList(head);

    head = deleteByValue(head, 30);

    cout << "After Deleting 30: ";
    printList(head);

    return 0;
}