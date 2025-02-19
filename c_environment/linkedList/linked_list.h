#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include <assert.h>
#include <errno.h>

struct s_node * createNode(int32_t data);
struct s_node * addNode(struct s_node *root, int32_t data);
// get pointer of the pointer root
// we need this because otherwise we cannot change the original pointer value of root.
void removeNode(struct s_node ** root, int32_t data);
void print(struct s_node *root);

struct s_node {
    struct s_node *next;
    int32_t data;
};

#endif
