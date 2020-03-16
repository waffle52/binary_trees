#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry Point
 * @tree: Pointer to root node
 * Description: Returns 1 if the binary tree is balanced)?
 * Return: 1 of true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lH = 0;
	int rH = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lH = rec_height(tree->left);
	rH = rec_height(tree->right);

	if (lH == rH)
		return (1);
	else
		return (0);
}

/**
 * rec_height - Entry Point
 * @tree: tree to traverse
 * Description: traveres a tree with post-order to find the height)?
 * Return: Returns height of tree
 */
size_t rec_height(const binary_tree_t *tree)
{
	size_t lH = 0;
	size_t rH = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
		rH = rec_height(tree->right) + 1;
	if (tree->left != NULL)
		lH = rec_height(tree->left) + 1;
	if (lH > rH)
		return (lH);
	else
		return (rH);
}
