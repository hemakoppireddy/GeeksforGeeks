/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if (!head || k == 1) return head;

        Node* curr = head;
        Node* prevTail = NULL;
        Node* newHead = NULL;

        while (curr) {
            Node* gHead = curr;
            Node* prev = NULL;
            int count = 0;
            while (curr && count < k) {
                Node* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                count++;
            }

            if (!newHead) newHead = prev;
            if (prevTail) prevTail->next = prev;
            prevTail = gHead;
        }
 
        return newHead;
    }
};