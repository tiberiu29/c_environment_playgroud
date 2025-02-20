
#include "linked_list.h"

int main() {

    struct s_node *root_node = createNode(20);
    addNode(root_node, 10);
    addNode(root_node, 15);
    addNode(root_node, 12);

    print(root_node);

    printf("\nREMOVING NODE\n");
    removeNode(&root_node, 20); // pass pointer to the original pointer.
    print(root_node);


    printf("\n REVERSING NODES\n");
    reverse(&root_node);
    print(root_node);


    return 0;
}
