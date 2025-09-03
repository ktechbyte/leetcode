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

        /*Divide and conquer merge Merge lists[0] with lists[1], lists[2] with lists[3].
        Then merge results again, halving the number of lists each round O(N*logk)*/
        while(lists.size() > 1){
            vector<ListNode*> newLists;
            for(int i = 0; i<lists.size(); i+=2){
                if(i + 1 < lists.size())
                    newLists.push_back(merge(lists[i], lists[i+1]));
                else 
                    newLists.push_back(lists[i]);
            }
            lists = move(newLists); //moves data: lists gets all items of newLists, newLists becomes empty
        }
        return lists[0];


        /*Sequential merging taking O(N*K) time*/
        // ListNode *head = lists[0];
        // for(int i = 1; i<n; i++)
        //     head = merge(head, lists[i]);        
        // return head;
    }
};