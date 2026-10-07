#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int maxi(ListNode* head){
    int max = head->val;
    ListNode* temp = head;
    while(temp != NULL){
        if (temp->val>max){
            max = temp->val;
        }
        temp = temp->next;
    }
    return max;
}
int main(){
    ListNode n1{10,NULL};
    ListNode n2{20,NULL};
    ListNode n3{30,NULL};


    n1.next = &n2;
    n2.next = &n3;
    cout << maxi(&n1);

}