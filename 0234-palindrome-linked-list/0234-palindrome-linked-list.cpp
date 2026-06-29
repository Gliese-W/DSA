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

    ListNode* reversePalindrome(ListNode* slow){       // made by me
        ListNode* curr = slow;
        ListNode* prev = NULL;
        while(curr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    } 


    bool isPalindrome(ListNode* head) {
        // Method 1 - stack

        // stack<int> st;
        // ListNode* temp = head;
        // while (temp){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }

        // temp = head;
        // while(temp->next != NULL){

        //     if (temp->val == st.top()){
        //         st.pop();
        //         temp = temp->next;
        //     }else {
        //         return false;
        //     }
            
        // }
        // return true;


        // Method 02 - Reverse the other half

        if (head == NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* reverseHead = reversePalindrome(slow);
        prev->next = NULL;

        slow = head;
        while(slow != NULL){
            if (slow->val != reverseHead->val){
                return false;
            } else{
                slow = slow->next;
                reverseHead = reverseHead->next;
            }
        }

        return true;
    }
};