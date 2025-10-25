#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val; 
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct compare {
    bool operator() (ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
    public:
    ListNode* mergeLists(vector<ListNode*> & lists) {
        priority_queue<ListNode* , vector<ListNode*> , compare> minHeap;

        for(int i=0; i<lists.size(); i++){
            if(lists[i] != NULL) {
                minHeap.push(lists[i]);
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while(!minHeap.empty()) {
            ListNode* node = minHeap.top();
            minHeap.pop();

            tail->next = node;
            tail = tail->next;

            if(node->next != NULL) {
                minHeap.push(node->next);
            }
        }
        return dummy->next;
    }

};

// time complexity = o(Nlogk)
// space complexity = o(k)