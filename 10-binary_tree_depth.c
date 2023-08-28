#include "binary_trees.h"

/**
 * binary_tree_depth - func to measure the depth node
 * @tree: the pointer to be checked
 *
 * Return: the result.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
