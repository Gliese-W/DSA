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
    // ListNode* rotateByOne(ListNode* t1){
    //     ListNode* temp = t1;
    //     ListNode* prev = NULL;

    //     while(temp->next != NULL){
    //         prev = temp;
    //         temp = temp->next;
    //     }
    //     temp->next = t1;
    //     prev->next = NULL;
    //     t1 = temp;

    //     return t1;
    // }

    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || k==0) return head;

        ListNode* temp = head;
        ListNode* tail = head;
        int count = 1;

        while(tail->next){
            count++;
            tail = tail->next;
        }
        tail->next = head;

        k = k%count;
        k = count - k - 1;
        while(k--){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;

        return head;

        // ListNode* temp = head;
        // ListNode* newHead = NULL;

        // if (head ==NULL || head->next==NULL) return head;

        // ListNode* counting = head;
        // int count = 0;
        // while(counting){
        //     count++;
        //     counting = counting->next;
        // }
        // k = k%count;

        // if (k==0) return head;

        // while (k--){
        //     newHead = rotateByOne(temp);
        //     temp = newHead;
        // }
        // return newHead;
    }
};