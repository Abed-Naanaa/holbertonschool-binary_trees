#include "binary_trees.h"
#include <stdlib.h> /* For malloc */

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    /* If the parent already has a left child, re-link it */
    if (parent->left != NULL)
    {
        /* The old left child becomes the left child of the new node */
        new_node->left = parent->left;
    }

    /* Set the new node as the left child of the parent */
    parent->left = new_node;

    return (new_node);
}
