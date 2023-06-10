// 32
// Problem Link: https://www.codingninjas.com/codestudio/problems/cycle-detection-in-a-singly-linked-list_8230683?challengeSlug=striver-sde-challenge&leftPanelTab=0

/****************************************************************

    Following is the class structure of the Node class:

        class Node {
        public:
            int data;
            Node *next;
            Node() {
                this->data = 0;
                next = NULL;
            }
            Node(int data) {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next) {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

bool detectCycle(Node *head) {
    Node *slow = head, *fast = head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast) return true;
    }
    return false;
}