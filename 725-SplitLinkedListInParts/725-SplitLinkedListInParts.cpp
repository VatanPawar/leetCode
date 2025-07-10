// Last updated: 7/11/2025, 12:07:11 AM
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
    int getLength(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    void forward(ListNode*& start, ListNode*& prev, int steps) {
        for (int i = 0; i < steps && start != NULL; i++) {
            prev = start;
            start = start->next;
        }
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size = getLength(head);
        vector<ListNode*> result;

        int baseSize = size / k;   // Base size of each part
        int extraNodes = size % k; // Parts that need one extra node

        ListNode* start = head;

        for (int i = 0; i < k; i++) {
            result.push_back(start); // Add the starting node of the current part
            ListNode* prev = nullptr;

            int currentSize = baseSize + (i < extraNodes ? 1 : 0); // Add one extra node to the first `extraNodes` parts

            forward(start, prev, currentSize);

            // Break the link to form the current part
            if (prev) prev->next = nullptr;
        }

        return result;
    }
};
