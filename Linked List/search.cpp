#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int search(ListNode* head){
    int target;
    cout << "Enter the number to be searched: ";
    cin >> target;
    ListNode* temp = head;
    while(temp!=NULL){
        if (temp->val == target){
            return true;
        }
        temp = temp->next;
        }
    return false;
}
int main(){
    ListNode n1{10,NULL};
    ListNode n2{20,NULL};
    ListNode n3{30,NULL};

    n1.next = &n2;
    n2.next = &n3;

    if(search(&n1)){
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}