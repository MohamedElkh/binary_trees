#include "binary_trees.h"

/**
 * binary_tree_inorder - func to go throught binary tree
 * @tree: the pointer to be checked
 * @func: the function pointer to be checked
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);

		func(tree->n);

		binary_tree_inorder(tree->right, func);
	}
}
