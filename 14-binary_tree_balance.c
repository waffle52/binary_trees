#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Entry Point
 * @tree: Pointer to root node
 * Description: Find the balance factor of a tree)?
 * Return: Returns balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = rec_height(tree->left);
	right = rec_height(tree->right);

	if (right > left)
	{
	return (right - left);
	}
	else
	{
		return (left - right);
	}
}

/**
 * rec_height - Entry Point
 * @tree: tree to traverse
 * Description: traveres a tree with post-order to find the height)?
 * Return: Returns height of tree
 */
size_t rec_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		return (rec_height(tree->left) + 1);
	}
	else
	{
		return (rec_height(tree->right) + 1);
	}
}
