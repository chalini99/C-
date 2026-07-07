
bool search(ListNode* head, int key)
{
    ListNode* temp = head;
    while (temp != nullptr) {
        if (temp->val == key) {
            return true; 
        }
        temp = temp->next;
    }
    return false; 
}

int countNodes(ListNode* head)
{
   int count=0;
   ListNode* temp =head;
   while(temp!=NULL){
      count++;
      temp=temp->next;
   }
   return count;
}

int findMax(ListNode* head)
{
   int maxi = head->val;
   ListNode* temp= head;
   while(temp!=NULL){
       if (temp->val > maxi){
        maxi = temp->val;
       }
        
   }
   return maxi;
}


int sum(ListNode* head)
{
    int sum=0;
    ListNode * temp= head;
    while(temp!=NULL){
        sum+=temp->val;
        temp= temp->next;
    }
    return sum;
}

void reversePrint(SinglyLinkedListNode* head) {
         
    if(head == NULL)
        return;

    reversePrint(head->next);

    cout << head->data << endl;
}
