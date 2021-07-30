// Program to do various linked list exercises
// Written by T13B

#include <stdio.h>

#include "list.h"

#define IDENTICAL 1
#define NOT_IDENTICAL 0

struct node {
    int          data;
    struct node *next;
};

// Create a new valid node with the value data and return it
struct node *new_node(int data);

int main(void) {

struct node *list_1 = new_node(10);
    add_last(list_1, 11);
    add_last(list_1, 12);
    
    struct node *list_2 = new_node(9);
    add_last(list_2, 12);
    add_last(list_2, 13);

    struct node *list_3 = new_node(10);
    add_last(list_3, 11);
    add_last(list_3, 12);

    printf("List 1: ");
    print_list(list_1);
    printf("List 2: ");
    print_list(list_2);
    printf("List 3: ");
    print_list(list_3);
    printf("\n");

    printf("List 1 is identical to list 2: %d\n", identical(list_1, list_2));
    printf("List 1 is identical to list 3: %d\n", identical(list_1, list_3));
    printf("\n");

    struct node *intersection = set_intersection(list_1, list_2);
    printf("Set intersection of list 1 and list 2: ");
    print_list(intersection);
    printf("\n");

    struct node *appended = list_append(list_1, list_2);
    printf("List 2 appended to list 1: ");
    print_list(appended);
    
    list_1->data = 100;
    printf("After changing list 1, appended list stays the same: ");
    print_list(appended);
    
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    if (head == NULL) {
        return new_node(data);
    }

    struct node *final = get_final_node(head);
    struct node *new = new_node(data);
    final->next = new;

    return head;
}

struct node *delete_last(struct node *head) {
    if (head == NULL) {
        return NULL;
    }

    struct node *prev = NULL;
    struct node *curr = head;
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    
    free(curr);
    
    if (prev == NULL) {
        return NULL;
    }
    prev->next = NULL;

    return head;
}

// Creates a copy of a linked list
// Takes in the list to be copied
// Returns a list that is identical to the given list
struct node *copy(struct node *list) {
    struct node *copy_list = NULL;
    struct node *curr = list;
    
    while (curr != NULL) {
        // Take the data from the current node in list and add a new node with 
        // this data to the copy list
        int data = curr->data;
        copy_list = add_last(copy_list, data);
        
        curr = curr->next;
    }
    //printf("copy_list data: %d\n", copy_list->data);
    
    return copy_list;
}

// Return new list equal to second list appended onto first list
// Takes in 2 lists: the second one is appended onto the first in a new list
// Returns head of the new appended list
struct node *list_append(struct node *first_list, struct node *second_list) {
    // Make copies of both lists so we don't change the original lists
    struct node *copy_first = copy(first_list);
    struct node *copy_second = copy(second_list);

    // If first list is empty, we can just return the whole second list
    if (copy_first == NULL) {
        return copy_second;
    }
    // Get to the last node of the first list
    struct node *curr = copy_first;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = copy_second;

    return copy_first;
}

// Check whether 2 linked lists are identical
// Takes in 2 linked lists
// Returns 1 if they are identical, returns 0 if they are not identical
int identical(struct node *first_list, struct node *second_list) {
    // Set two pointers to move through each list
    struct node *curr1 = first_list;
    struct node *curr2 = second_list;
    // Move through both lists at the same time until at least one pointer is 
    // NULL
    while (curr1 != NULL && curr2 != NULL) {
        // If any nodes don't have the same data, then the lists can't be 
        // identical
        if (curr1->data != curr2->data) {
            return NOT_IDENTICAL;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    // We know that one pointer is NULL, but if the other pointer isn't NULL, 
    // the lists aren't identical
    if (curr1 != NULL || curr2 != NULL) {
        return NOT_IDENTICAL;
    }

    return IDENTICAL;
}

// Returns a new list containing only elements found in both lists
// Takes in 2 linked lists that are in strictly ascending order
// Returns head of new intersection list that is in strictly ascending order
// Returns NULL if no elements are found in both lists
struct node *set_intersection(struct node *first_list, struct node *second_list) {
    // Set intersection to start off as NULL
    struct node *intersection = NULL;
    
    struct node *curr1 = first_list;
    struct node *curr2 = second_list;
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->data == curr2->data) {
            // If both nodes equal, we can add the node data to intersection, 
            // and move both curr pointers onwards
            intersection = add_last(intersection, curr1->data);
            curr1 = curr1->next;
            curr2 = curr2->next;
        } else if (curr1->data > curr2->data) {
            // If curr1 has larger number than curr2, we should move curr2 down 
            // the list
            curr2 = curr2->next;
        } else if (curr2->data > curr1->data) {
            // If curr2 has larger number than curr1, we should move curr1 down 
            // the list
            curr1 = curr1->next;
        }
    }
    
    return intersection;
}

/** HELPER FUNCTIONS **/
// Create a new valid node with the value data and return it
// Takes in a int "data" which is the value of the node.
// Returns the new node.
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

// Prints the entire list in the format a -> b -> X where X is NULL.
// Takes in the head of a linked list of struct nodes.
// Returns nothing.
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X");

    return;
}

// Gets the final node of a linked list.
// Takes in the linked list "head".
// Returns the node pointing to NULL.
struct node *get_final_node(struct node *head) {
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    return curr;
}
