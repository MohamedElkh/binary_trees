#include "binary_trees.h"

/**
 * binary_tree_is_leaf - func to check if node is leaf or not
 * @node: the pointer to be checked
 *
 * Return: the result.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
