#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
};
ListNode* deletelast(ListNode* head){
    
    if (head == NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    ListNode* temp=head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
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

    head = deletelast(head);

    cout << "After deleting:\n";
    printlist(head);

    return 0;
}