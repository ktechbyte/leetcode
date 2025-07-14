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
    int getDecimalValue(ListNode* head) {
        // approach with extra space
        // vector<int> arr;
        // ListNode* temp = head;
        // while(temp){
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // int n = arr.size();
        // int ans = 0;
        // int place = n-1;
        // for(int i = 0; i<n; i++, place--){
        //     ans = ans + arr[i]*pow(2, place);
        // }
        
        ListNode* temp = head;
        int count = 0, ans = 0;
        while(temp->next){
            count++;
            temp = temp->next;
        }
        temp = head;
        while(count>=0){
            ans = ans + (temp->val)*pow(2, count);
            temp = temp->next;
            count--;
        }
        return ans;
    }
};