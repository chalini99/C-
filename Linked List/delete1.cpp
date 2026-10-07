#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
};
ListNode* deleteFirst(ListNode* head){
    if (head == NULL){
        return NULL;
    }
    ListNode* temp = head;
    head = head->next;
    delete temp;
    return head;
}
void printlist(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main()
{
    ListNode* n1 = new ListNode{10, NULL};
    ListNode* n2 = new ListNode{20, NULL};
    ListNode* n3 = new ListNode{30, NULL};
    ListNode* n4 = new ListNode{40, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    ListNode* head = n1;

    cout << "Before deleting:\n";
    printlist(head);

    head = deleteFirst(head);

    cout << "After deleting:\n";
    printlist(head);

    return 0;
}