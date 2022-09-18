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
    void deleteNode(ListNode* node) {
        // cout<<node->val;
        node->val=node->next->val;
        // cout<<node->val;
        node->next=node->next->next;
        
    }
};