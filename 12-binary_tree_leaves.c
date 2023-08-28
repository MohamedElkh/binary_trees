#include "binary_trees.h"

/**
 * binary_tree_leaves - func to counts the leaves in tree
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t le = 0;

	if (tree)
	{
		le += (!tree->left && !tree->right) ? 1 : 0;

		le += binary_tree_leaves(tree->left);
		le += binary_tree_leaves(tree->right);
	}
	return (le);
}
