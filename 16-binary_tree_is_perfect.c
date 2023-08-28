#include "binary_trees.h"

/**
 * do_leaf - func to check if node is leaf
 * @n: the pointer to be checked
 *
 * Return: the result.
 */

unsigned char do_leaf(const binary_tree_t *n)
{
	return ((n->left == NULL && n->right == NULL) ? 1 : 0);
}

/**
 * do_depth - func to return the depth
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

size_t do_depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + do_depth(tree->parent) : 0);
}

/**
 * g_leaf - func to return a lead
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

const binary_tree_t *g_leaf(const binary_tree_t *tree)
{
	if (do_leaf(tree) == 1)
	{
		return (tree);
	}

	return (tree->left ? g_leaf(tree->left) : g_leaf(tree->right));
}

/**
 * do_perfect - function to check tree perfect or not
 * @tree: pointer to be checked
 * @lf: checking
 * @le: level of current node
 *
 * Return: the result.
 */

int do_perfect(const binary_tree_t *tree, size_t lf, size_t le)
{
	if (do_leaf(tree))
	{
		return (le == lf ? 1 : 0);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (do_perfect(tree->left, lf, le + 1) &&
		do_perfect(tree->right, lf, le + 1));
}

/**
 * binary_tree_is_perfect - func to check if tree perfect
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (do_perfect(tree, do_depth(g_leaf(tree)), 0));
}
