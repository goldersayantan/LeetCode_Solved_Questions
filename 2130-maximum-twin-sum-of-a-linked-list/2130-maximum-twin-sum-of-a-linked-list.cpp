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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Find the middle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half
        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Calculate maximum twin sum
        int maxSum = 0;
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            int sum = first->val + second->val;
            maxSum = max(maxSum, sum);

            first = first->next;
            second = second->next;
        }

        return maxSum;
    }
};
