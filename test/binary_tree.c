#include <stdio.h>
#include <stdlib.h>
#include "include/binary_tree.h"

t_tree* binary_tree(t_tree **tree, int data)
{
    int forArbre = 0;

    if ((*tree) != NULL) {
            if (data < (*tree)->data) {(*tree)->tleft = binary_tree(&((*tree)->tleft), data);}
            else {(*tree)->tright = binary_tree(&((*tree)->tright), data);}
    }
    else if (forArbre == 0) {
            (*tree) = malloc(sizeof(t_tree));
            (*tree)->data = data;
            (*tree)->tleft = NULL;
            (*tree)->tright = NULL;
            forArbre++;
    }
    return (*tree);
}
