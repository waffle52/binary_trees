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
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp = node->parent;

	if (temp->left == node)
		return (temp->right);
	else
		return (temp->left);
}
