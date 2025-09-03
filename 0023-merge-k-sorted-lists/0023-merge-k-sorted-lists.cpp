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
    ListNode* merge(ListNode* list1, ListNode* list2){
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* mergedHead = NULL;
        if(list1->val <= list2->val){
            mergedHead = list1;
            list1 = list1->next;
        } else{
            mergedHead = list2;
            list2 = list2->next;
        }
        ListNode* current = mergedHead;
        while(list1 && list2){
            if(list1->val <= list2->val){
                current->next = list1;
                list1 = list1->next;
            } else{
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        if(list1) current->next = list1;
        if(list2) current->next = list2;
        return mergedHead;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0) return NULL;
        if(n == 1) return lists[0];

        ListNode *head = lists[0];
        for(int i = 1; i<n; i++)
            head = merge(head, lists[i]);
        
        return head;
    }
};