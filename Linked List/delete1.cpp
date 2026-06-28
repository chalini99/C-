#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
};
void deleteFirstAndPrint(ListNode* head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    ListNode* temp = head;
    head = head->next;
    delete temp;

    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    ListNode* n1 = new ListNode{11, nullptr};
    ListNode* n2 = new ListNode{20, nullptr};
    ListNode* n3 = new ListNode{30, nullptr};
    ListNode* n4 = new ListNode{40, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout << "After deleting first node: ";
    deleteFirstAndPrint(n1);

    return 0;
}
