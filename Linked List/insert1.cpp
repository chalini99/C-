#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
};
ListNode* insertFirst(ListNode* head,int value){
    ListNode* newNode = new ListNode();
    newNode->val = value;
    newNode->next=head;
    head=newNode;
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

    cout << "Before inserting:\n";
    printlist(head);

    head = insertFirst(head, 1);

    cout << "After inserting:\n";
    printlist(head);

    return 0;
}