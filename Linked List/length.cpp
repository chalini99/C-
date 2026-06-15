#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int length(ListNode* head){
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    ListNode n1{10, NULL};
    ListNode n2{20, NULL};
    ListNode n3{30, NULL};
    ListNode n4{40,NULL};

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    cout << length(&n1);

    return 0;
}