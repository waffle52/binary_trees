#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Entry Point
 * @node: Pointer to node
 * Description: finds the sibling of a node)?
 * Return: Pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left->n < node->n)
		return (node->parent->left);
	else
		return (node->parent->right);
}
