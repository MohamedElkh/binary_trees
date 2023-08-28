#include "binary_trees.h"

/**
 * binary_tree_size - func to measure the size of tree
 * @tree: the pointer to be checked
 *
 * Return: the size of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (tree)
	{
		sz += 1;

		sz += binary_tree_size(tree->left);
		sz += binary_tree_size(tree->right);
	}
	return (sz);
}
