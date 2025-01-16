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
    int countNode(ListNode* head){
        int count = 0;
        ListNode *temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int count = countNode(head);
        if(count==0 || count==1) return head;
        count = count%2==0 ? (count/2)+1 : (count+1)/2;
        ListNode *temp = head;
        while(--count){
            temp = temp->next;
        }
        return temp;
    }
};