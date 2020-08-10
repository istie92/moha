#include<stdlib.h>
#include "include/binary_tree.h"

#define TAB_LEN 6

int main(void)
{
    signed int tab[] = {3, 1, 2, 5, 4, -1};
    unsigned int  i = 0;
    t_tree *tree = NULL;

    while (i < TAB_LEN)
        {
            binary_tree(&tree, tab[i]);
            i++;
        }
    print_to(tree, 2);
    return (0);
}
