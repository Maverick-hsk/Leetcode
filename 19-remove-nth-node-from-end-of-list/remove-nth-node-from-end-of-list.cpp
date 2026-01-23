/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode* temp = head;
int count = 0;
while(temp!= NULL){
    count++;
    temp = temp->next;
}
int desired = count-n-1;
ListNode* curr = head;
if(count == n) return head->next;
while( desired--){
    curr = curr->next;
}
if(curr!= NULL && curr->next!= NULL){
curr->next = curr->next->next;
}
return head;



    //     ListNode* f = head;
    //      ListNode* s =head;
    //      while(n--) f = f->next;
    //     if(f==NULL) return s->next;

    //      while(f->next != NULL){
    //         s=s-> next;
    //         f =f->next;
    //      }
    //      s ->next = s->next->next;
    // return head;

    }
};