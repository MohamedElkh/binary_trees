#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree
 * @parent: the pointer to be checked
 * @value: the value to put in new node
 *
 * Return: null if there is error
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;

	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
