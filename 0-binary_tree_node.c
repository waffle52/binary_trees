#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node - Entry Point
 * @parent: root of tree to add node to
 * @value: integer value to add to new node
 * Description: creates a new node to add to the tree
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);

	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	tempNode->parent = parent;

	return (tempNode);
}
