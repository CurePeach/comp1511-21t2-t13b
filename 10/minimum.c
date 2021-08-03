// Author: Clarissa Tatang
// Editor: T13B

// Iterative version
int minimum(struct node *head) {
    if (head == NULL) {
        return 0;
    }

    int min = head->data;
    struct node *curr = head->next;
    while (curr != NULL) {
        if (min > curr->data) {
            min = curr->data;
        }
    
        curr = curr->next;
    }

    return min;
}

// Recursive version
int minimum(struct node *head) {
    // BASE CASE
    if (head->next == NULL) {
        return head->data;
    }
    
    // RECURSIVE CASE
    int min_without_head = minimum(head->next);
    if (head->data < min_without_head) {
        return head->data;
    }
    
    return min_without_head;
}