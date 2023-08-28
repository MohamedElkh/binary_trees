#include "binary_trees.h"

/**
 * b_tree - func to measure the height of tree
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

size_t b_tree(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lf = 0, ri = 0;

		lf = tree->left ? 1 + b_tree(tree->left) : 1;
		ri = tree->right ? 1 + b_tree(tree->right) : 1;

		return ((lf > ri) ? lf : ri);
	}

	return (0);
}

/**
 * binary_tree_balance - func to measure the balance
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (b_tree(tree->left) - b_tree(tree->right));
	}
	return (0);
}
