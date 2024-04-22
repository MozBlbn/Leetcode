class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy_head = new ListNode(0); // Dummy head to simplify the code
        ListNode* current = dummy_head;
        int carry = 0;

        while (l1 || l2) {
            int x = (l1) ? l1->val : 0;
            int y = (l2) ? l2->val : 0;
            int sum = x + y + carry;

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        return dummy_head->next; // Return the actual result, not the dummy head.

    }
};