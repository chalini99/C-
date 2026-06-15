#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
ListNode* reverse(ListNode* head){
    ListNode* prev= NULL;
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev= curr;
        curr= nextNode;
    }
    return prev;
}
int main(){
    ListNode n1{10,NULL};
    ListNode n2{20,NULL};
    ListNode n3{30,NULL};

    n1.next = &n2;
    n2.next = &n3;

    ListNode* reversedHead = reverse(&n1);
    while(reversedHead != NULL){
        cout << reversedHead->val << " ";
        reversedHead = reversedHead->next;
    }
    cout << endl;

}