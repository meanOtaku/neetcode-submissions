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
    bool hasCycle(ListNode* head) {
        if(head == nullptr) {
            return false;
        }
        ListNode* singleStep = head;
        ListNode* doubleStep = head->next;
        while(doubleStep != nullptr){
            cout << "helo";
            if(doubleStep->val == singleStep->val) {
                break;
            }
            if(doubleStep->next == nullptr) {
                return false;
            }
            singleStep = singleStep->next;
            doubleStep = doubleStep->next->next;
        }
        if(doubleStep == nullptr) {
            return false;
        }
        return true;
    }
};
