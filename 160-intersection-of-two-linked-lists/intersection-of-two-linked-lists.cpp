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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        ListNode* curr = headA;
        ListNode* temp = headB;
        int count_1 = 0;
        int count_2 = 0;
        while (curr != NULL) {
            count_1++;
            curr = curr->next;
        }
        while (temp != NULL) {
            count_2++;
            temp = temp->next;
        }
        int diff = abs(count_1 - count_2);
        while (diff--) {
            if (count_2 > count_1) {
                p2 = p2->next;
            } else
                p1 = p1->next;
        }
        while(p1 != NULL && p2!= NULL){
            if(p1 == p2) return p1;
            p1 = p1->next;
            p2= p2->next;
        }

        return NULL;
        // unordered_set<ListNode*> s;
        // ListNode* curr = headA;
        // while(curr!= NULL){
        //     s.insert(curr);
        //     curr= curr->next;
        // }

        //  ListNode* temp = headB;
        // while(temp!= NULL){
        //   if(s.find(temp)!= s.end()){

        //     return temp;
        //     break;
        //   }
        //   temp  = temp->next;
        // }
        // return NULL;
    }
};