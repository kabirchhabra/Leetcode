class Solution {
    int len(ListNode* head) {
        int length = 0;
        while(head) {
            length++;
            head = head->next;
        }
        return length;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(len(l2) > len(l1)) {
            swap(l1,l2); 
        }
        ListNode* head = l1,*prev = head;
        int carry = 0;
        while(l1) {
            int sum_of_digits = l1->val + (l2 ? l2->val : 0) + carry;
            if(sum_of_digits > 9) {
                carry = sum_of_digits/10;
            } else {
                carry = 0;
            }
            l1->val = sum_of_digits%10;
            prev = l1;
            l1 = l1->next;
            l2 = (l2 ? l2->next : NULL);
        }
        while(carry) {
            prev->next = new ListNode(carry);
            carry = 0;
        }
        return head;
    }
};