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

    // recursive function
    ListNode* reverse(ListNode* head){
        if (head == NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while (curr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }


    ListNode* reverseList(ListNode* head) {

        // Method 3 - Recursion
        head = reverse(head);
        return head;
        
        

        // Method 2 - Three pointers

        // ListNode* temp = head;
        // ListNode* prev = NULL;

        // while (temp != NULL){
        //     ListNode* front = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     temp = front;
        // }

        // return prev;



        // Method - 01 - Stack

        // stack<int> st;
        // ListNode* temp = head;
        
        // while (temp){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }

        // temp = head;
        // while (temp){
        //     temp->val = st.top();
        //     st.pop();
        //     temp = temp->next;
        // }

        // return head;
    }
};