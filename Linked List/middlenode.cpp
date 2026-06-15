#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int middle(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow= slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}
int main(){
    ListNode n1{10,NULL};
    ListNode n2{20,NULL};
    ListNode n3{30,NULL};
    ListNode n4{40,NULL};
    ListNode n5{50,NULL};
    ListNode n6{60,NULL};

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;

    cout << middle(&n1);

}