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
        ListNode *newHead = nullptr, *currentHead = head;
        ListNode *previos = nullptr, *current = nullptr, *next = nullptr, *nextNext = nullptr;
        while (currentHead) {
            current = currentHead;
            next = current->next;
            current->next = previos;
            previos = current;
            currentHead = next;
        }

        return current;
    }
};
