#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Entry Point
 * @node: pointer to node
 * Description: finds the uncle of a node)?
 * Return: Pointer to node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	temp = node->parent;

	if (temp == temp->parent->left)
		return (temp->parent->right);
	else
		return (temp->parent->left);
}
