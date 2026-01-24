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
    ListNode* swapNodes(ListNode* head, int k) {

    //     int count =0;
    //     ListNode* temp = head;
    //     while(temp!= NULL){
    //         count++;
    //         temp = temp->next;
    //     }
    //    ListNode* first = head;
    //    ListNode* second = head;

    //   int desired = count - k+1;
    //   for(int i = 1;i<k;i++){
    //     first = first->next;
    //   }
    // for(int i = 1;i<desired;i++){
    //     second = second->next;
    // }
    //    swap(first->val, second->val);
       
    //    return head;

   ListNode* fast = head;
   ListNode* slow = head;
   while(--k){
    fast = fast->next;
   }
   ListNode* first = fast;
   while( fast->next != NULL){
    fast = fast->next;
    slow = slow->next;
   }
    swap(first->val, slow->val);

    return head;
    }
};