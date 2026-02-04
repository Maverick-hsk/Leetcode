/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;
        ListNode* curr = headA;
        while(curr!= NULL){
            s.insert(curr);
            curr= curr->next;
        }
         
         ListNode* temp = headB;
        while(temp!= NULL){
          if(s.find(temp)!= s.end()){

            return temp;
            break;
          }
          temp  = temp->next;
        }
        return NULL;
    }
};