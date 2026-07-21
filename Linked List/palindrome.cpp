// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {

//         if(head == NULL || head->next == NULL)
//             return true;

//         // Step 1: Find middle
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // Step 2: Reverse second half
//         ListNode* prev = NULL;
//         ListNode* curr = slow;
//         ListNode* nextNode = NULL;

//         while(curr != NULL)
//         {
//             nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }

//         // Step 3: Compare first half and reversed second half
//         ListNode* first = head;
//         ListNode* second = prev;

//         while(second != NULL)
//         {
//             if(first->val != second->val)
//                 return false;

//             first = first->next;
//             second = second->next;
//         }

//         return true;
//     }
// };



#include <iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
//INSERRT AT END
ListNode* insertend(ListNode* head, int value){
    ListNode* newNode = new ListNode(value);
    if (head==NULL){
        return newNode;
    }
    ListNode* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void printlist(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
 //check palindrome
 bool ispalindrome(ListNode* head){
    if (head==NULL || head->next==NULL)
        return true;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //reverse second half
    ListNode* prev = NULL;
    ListNode* curr = slow;
    ListNode* nextNode = NULL;
    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev =curr;
        curr = nextNode;
    }
    //compare first half and reversed second half
    ListNode* first = head;
    ListNode* second = prev;
    while(second != NULL){
        if(first->val != second->val)
            return false;
        first = first->next;
        second = second->next;
    }
    return true;
 }
 int main() {

    ListNode* head = NULL;

    // Example: 1 -> 2 -> 3 -> 2 -> 1
    head = insertend(head, 1);
    head = insertend(head, 2);
    head = insertend(head, 3);
    head = insertend(head, 2);
    head = insertend(head, 1);

    cout << "Linked List: ";
    printlist(head);

    if (ispalindrome(head))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}