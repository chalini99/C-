#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int mini(ListNode* head){
    int min= head->val;
    ListNode* temp = head;
    while(temp != NULL){
        if (temp->val<min){
            min = temp->val;
        }
        temp = temp->next;
    }
    return min;
}
int main(){
    ListNode n1{10,NULL};
    ListNode n2{20,NULL};
    ListNode n3{30,NULL};


    n1.next = &n2;
    n2.next = &n3;
    cout << mini(&n1);

}