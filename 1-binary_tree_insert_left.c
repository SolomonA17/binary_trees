#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - adds a node as the left-child of another node
 * @parent: pointer to the node to add the left-child to
 * @value: value to store in the new node
 *
 * Explanation: If the parent already has a left-child, the new node must occupy
 * that position, and the former left-child should become the left-child of the
 * newly created node.
 *
 * Result: pointer to the newly created node, or NULL if unsuccessful
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child;

    if (parent == NULL)
        return (NULL);
    left_child = binary_tree_node(parent, value);
    if (left_child == NULL)
        return (NULL);
    left_child->left = parent->left;
    if (left_child->left != NULL)
        left_child->left->parent = left_child;
    parent->left = left_child;
    return (left_child);
}

