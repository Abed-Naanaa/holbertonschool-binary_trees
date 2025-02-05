#include "binary_trees.h"
#include <stdlib.h> /* For malloc */

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    /* If parent already has a left child, the new node takes its place */
    if (parent->left != NULL)
    {
        /* The old left child will be moved to the new node's left */
        new_node->left = parent->left;
    }

    parent->left = new_node; /* Set the new node as the left child */

    return (new_node);
}
