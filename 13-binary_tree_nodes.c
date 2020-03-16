#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry Point
 * @tree: pointer to root node
 * Description: gets the number of nodes with at least 1 child)?
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	}
	else
	{
		return (0);
	}
}
