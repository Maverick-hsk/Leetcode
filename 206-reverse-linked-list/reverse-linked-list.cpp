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
    ListNode* reverseList(ListNode* head) {
    //     vector<int> ans;
        
    //     for(ListNode* curr = head; curr!=NULL;curr= curr->next){
    //         ans.push_back(curr->val);
    //     }
    //    reverse(ans.begin(), ans.end());
    //     ListNode* curr = head;
    //    for(int i=0;i<ans.size(); i++){
    //     curr->val  = ans[i];
    //     curr = curr->next;
    //    }
        if(head==NULL || head->next == NULL) return head; 

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp = curr -> next;
        while(curr!=NULL){
             ListNode* temp = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }


 return prev;

    }
};