#include "binary_trees.h"

/**
 * do_full - func to check if tree full
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

int do_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				do_full(tree->left) == 0 || do_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - func to check if tree full
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (do_full(tree));
}
