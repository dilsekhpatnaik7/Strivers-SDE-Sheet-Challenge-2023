// 26
// Problem Link: https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge&leftPanelTab=0

Node *findMiddle(Node *head) {
    if(!head) return nullptr;

    Node* slow = head, *fast = head->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(!fast) return slow;
    else if(!fast->next) return slow->next;
}