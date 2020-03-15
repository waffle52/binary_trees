#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry Point
 * @tree: node to get height from
 * Decription: Gets a node and sees its height)?
 * Return: Returns height from node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh = 0;
	int rh = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL)
		rh = 1 + binary_tree_height(tree->right);
	if (tree->left != NULL)
		lh = 1 + binary_tree_height(tree->left);
	if (lh > rh)
		return (lh);
	else
		return (rh);
}
