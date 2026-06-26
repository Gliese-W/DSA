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


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;


        ListNode* t1 = l1;
        ListNode* t2 = l2;

        while (t1 != NULL || t2 != NULL || carry){
            
            int sum = 0;
            if (t1 != NULL){
                sum += t1->val;
                t1 = t1->next;
            }

            if (t2 != NULL){
                sum += t2->val;
                t2 = t2->next;
            }

            // if (carry != 0){
            //     sum += carry;
            //     carry = 0;
            // }

            // if (sum >= 10){
            //     carry = 1;
            //     sum %= 10;
            // }

            sum += carry;
            carry = sum/10;

            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = temp->next;
        }

        // t1 = l1;
        // t2 = l2;

        // while ( t1 != NULL || t2 != NULL ){
        //     if (t1 != NULL){
        //         ListNode* num = new ListNode(t1->val);
        //         temp->next = num;
        //         temp = temp->next;
        //     }

        //     if (t2 != NULL){
        //         ListNode* num = new ListNode(t2->val);
        //         temp->next = num;
        //         temp = temp->next;
        //     }
        // }

        return dummy->next;
    }


    // Method 01 - using array

    // ListNode* arrToLL(vector<int> &arr){
    //     ListNode* head = new ListNode(arr[0]);
    //     ListNode* mover = head;
    //     for (int i=1; i<arr.size(); i++){
    //         ListNode* temp = new ListNode(arr[i]);
    //         mover->next = temp;
    //         mover = temp;
    //     }
    //     return head;
    // }

    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //     vector<int> arr;
    //     ListNode* t1 = l1;
    //     ListNode* t2 = l2;

    //     while (t1){
    //         arr.push_back(t1->val);
    //         t1 = t1->next;
    //     }

    //     int i = 0;
    //     while (t2){
    //         if (i<arr.size()){
    //             arr[i] += t2->val;
    //         }else{
    //             arr.push_back(t2->val);
    //         }
    //         i++;
    //         t2 = t2->next;
    //     }

    //     for (int j=0; j<arr.size()-1; j++){
    //         if (arr[j] >= 10){
    //             arr[j] = arr[j] % 10;
    //             arr[j+1] += 1;
    //         }
    //     }

    //     if (arr[arr.size()-1] >= 10){
    //         arr[arr.size()-1] %= 10;
    //         arr.push_back(1);
    //     }

    //     ListNode* head = arrToLL(arr);

    //     return head;
    // }
};