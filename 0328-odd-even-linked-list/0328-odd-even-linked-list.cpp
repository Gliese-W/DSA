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
    ListNode* oddEvenList(ListNode* head) {

        // if (head == NULL){
        //     return head;
        // }

        // ListNode* odd = head;
        // ListNode* even = head->next;
        // ListNode* evenHead = head->next;

        // while (even != NULL && even->next != NULL){
        //     odd->next = odd->next->next;
        //     even->next = even->next->next;

        //     odd = odd->next;
        //     even = even->next;
        // }

        // odd->next = evenHead;

        // return head;



        // Method - 01 : working but O(N) Space Complexity

        // ListNode* temp = head;
        // vector<int> arr;

        // while (temp != NULL && temp->next != NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next->next;
        // }
        // if (temp != NULL) arr.push_back(temp->val);

        // temp = head->next;
        // while (temp != NULL && temp->next != NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next->next;
        // }
        // if (temp != NULL) arr.push_back(temp->val);

        // temp = head;
        // for(int i=0; i<arr.size(); i++){
        //     temp->val = arr[i];
        //     temp = temp->next;
        // }

        // return head;

        if (head==NULL) return head;

        ListNode* oddNode = head;
        ListNode* evenNode = head->next;
        ListNode* evenHead = head->next;
        
        while (evenNode && evenNode->next){
            oddNode->next = oddNode->next->next;
            evenNode->next = evenNode->next->next;

            oddNode = oddNode->next;
            evenNode = evenNode->next;
        }
        oddNode->next = evenHead;

        return head;
    }
};