#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) {
        return head;
    }

    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    
    // Move prev to the node just before the sublist to be reversed
    for (int i = 1; i < left; ++i) {
        prev = prev->next;
    }

    ListNode* curr = prev->next;
    ListNode* nextNode = nullptr;

    // Reverse the sublist from left to right
    for (int i = 0; i < right - left; ++i) {
        nextNode = curr->next;
        curr->next = nextNode->next;
        nextNode->next = prev->next;
        prev->next = nextNode;
    }

    return dummy.next;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int left = 2;
    int right = 4;

    // Reverse the sublist from position left to right
    head = reverseBetween(head, left, right);

    // Print the reversed linked list
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)