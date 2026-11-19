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
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* next = curr->next;
            curr->next  = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = reverse(l1);
        ListNode* t2 = reverse(l2);
        ListNode* ans = new ListNode(-1);
        ListNode* t3 = ans;
        int c = 0;
        while(t1 && t2){
            int total = (t1->val) + (t2->val) + c;
            int num = total%10;
            c = total/10;
            t3->next = new ListNode(num);
            t1 = t1->next;
            t2 = t2->next;
            t3 = t3->next;
        }
        if(t1 != NULL){
            while(t1){
                int total = (t1->val) + c;
                int num = total%10;
                c = total/10;
                t3->next = new ListNode(num);
                t1 = t1->next;
                t3 = t3->next;
            }
        }else{
            while(t2){
                int total = (t2->val) + c;
                int num = total%10;
                c = total/10;
                t3->next = new ListNode(num);
                t2 = t2->next;
                t3 = t3->next;
            }
        }
        if(c != 0){
            t3->next = new ListNode(c);
        }
        return reverse(ans->next);
    }
};