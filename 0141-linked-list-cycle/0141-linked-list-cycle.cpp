/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //hashmap solution (O(n) time and space)
        unordered_set<ListNode*> mpp;
        ListNode *temp = head;
        while(temp){
            if(mpp.find(temp)!=mpp.end()){
                return true;
            }
            mpp.insert(temp);
            temp = temp->next;
        }
        return false;
    }
};