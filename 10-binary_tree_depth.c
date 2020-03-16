#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Entry Point
 * @tree: Node to check dpeth of
 * Description: Checks the dpeth of a node to the bottom of a tree
 * Return: Return an int of the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int down = 0;


	if (tree == NULL)
	{
		return (0);
	}
	for (down = 0; tree->parent != NULL; down++)
	{
		tree = tree->parent;
	}
	return (down);
}
