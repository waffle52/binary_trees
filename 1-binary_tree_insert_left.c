#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry Point
 * @parent: Parent of new node
 * @value: value to add to new node
 * Description: Creates a new node on the left side of the parent
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
		temp->parent = new_node;
	}

	return (new_node);
}
