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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = nullptr, *tail = nullptr, *head1 = list1, *head2 = list2;
        while (head1 != nullptr || head2 != nullptr) {
            if (head1 != nullptr && (head2 == nullptr || head1->val < head2->val)) {
                if (head == nullptr) {
                    head = head1;
                    tail = head1;
                } else {
                    tail->next = head1;
                    tail = head1;
                }
                head1 = head1->next;
            } else {
                if (head == nullptr) {
                    head = head2;
                    tail = head2;
                } else {
                    tail->next = head2;
                    tail = head2;
                }
                head2 = head2->next;
            }
        }
        if (tail != nullptr)
            tail->next = nullptr;
        return head;
    }
};
