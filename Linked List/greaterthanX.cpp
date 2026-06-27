#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
int larger(ListNode* head, int X){
    int count=0;
    ListNode* temp = head;
    while(temp != NULL){
        if (temp->val>X){
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
    ListNode n4{40,NULL};


    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    int X = 25;
    cout << "Count of nodes greater than " << X << " = " << larger(&n1, X) << endl;

}