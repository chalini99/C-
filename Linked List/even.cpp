#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int evencount(ListNode* head){
    int count=0;
    ListNode* temp = head;
    while(temp != NULL){
        if (temp->val%2==0){
            count++;
        }
        temp = temp->next;
    }
    return count;
}
int main(){
    ListNode n1{11,NULL};
    ListNode n2{20,NULL};
    ListNode n3{30,NULL};


    n1.next = &n2;
    n2.next = &n3;
    cout << evencount(&n1);

}