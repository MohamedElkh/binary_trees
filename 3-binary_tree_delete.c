#include "binary_trees.h"

/**
 * binary_tree_delete - func to delete the tree
 * @tree: the pointer to be checked
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);

		binary_tree_delete(tree->right);

		free(tree);
	}
}
