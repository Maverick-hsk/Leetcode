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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        int j = 0;
        ListNode* test = head;
        while (test != NULL) {
            count++;
            test = test->next;
        }
        if (head == NULL)
            return NULL;
        else if (head->next == NULL)
            return head;
        else if (k % count == 0)
            return head;
        k = k % count;
        int desired = count - k;
        ListNode* temp = head;
        ListNode* firstindex = head;

        while (temp != NULL && temp->next != NULL) {
            j++;
            if (j == desired) {
                firstindex = temp->next;
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }

        ListNode* curr = firstindex;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = head;
        return firstindex;
    }
};