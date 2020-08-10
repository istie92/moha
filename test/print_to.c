#include "include/binary_tree.h"

void print_to(t_tree *tree, int key) {
    if (tree == NULL) {
        return;
    }
    while(tree) {
        if (key == tree->data) {
           printf("%d\n", tree->data);
           return;
        }
        printf("%d->", tree->data);
        if (key > tree->data)
            tree = tree->tright;
        else
            tree = tree->tleft;
    }
}
