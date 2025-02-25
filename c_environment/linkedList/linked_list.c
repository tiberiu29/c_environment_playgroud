#include "linked_list.h"

struct s_node * createNode(int32_t data) {
    struct s_node *new_node = NULL;
    new_node = malloc(sizeof(struct s_node));

    new_node->next=NULL;
    new_node->data=data;
    return new_node;
}

struct s_node * addNode(struct s_node *root, int32_t data) {
    struct s_node *new_node = createNode(data);

    if(root == NULL) {
        return new_node;
    }

    struct s_node *current_node = root;

    while(current_node->next != NULL) {
        current_node = current_node->next;
    }

    current_node->next = new_node;

    return new_node;
}

void removeNode(struct s_node ** root, int32_t data) {

    struct s_node *prev_node = NULL;
    struct s_node *current_node = *root;
    bool found_node = false;


    while(current_node != NULL) {
        if(current_node->data == data) {
            found_node = true;
            break;
        }
        prev_node = current_node;
        current_node = current_node->next;
    }

    if(found_node) {
        if(prev_node == NULL) {
            *root = current_node->next;
        } else {
            prev_node->next = current_node->next;        
        }

        free(current_node);
    }
}

void reverse(struct s_node ** root) {
    struct s_node *prev_node = NULL;
    struct s_node *current_node = *root;

    while(current_node != NULL) {
        struct s_node *temp_next_node = current_node->next;

        current_node->next = prev_node;
        prev_node = current_node;
        current_node = temp_next_node;
    }

    *root = prev_node;
};

void print(struct s_node *root) {

    struct s_node *current_node = root;

    while(current_node != NULL) {
        printf("%i\n", current_node ->data);
        current_node = current_node->next;
    }
}

