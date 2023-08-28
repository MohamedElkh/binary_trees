#include "binary_trees.h"

/**
 * binary_tree_postorder - func to traverse binary tree
 * @tree: the pointer to be checked
 * @func: the functon ponter to be checked
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);

		binary_tree_postorder(tree->right, func);

		func(tree->n);
	}
}
