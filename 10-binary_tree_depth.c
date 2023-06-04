#include "binary_trees.h"

/**
 * binary_tree_depth- Measures the depth of a node in a binary tree
 * @tree: Pointer to the node of the tree to measure its depth
 *
 * Return: 0 if tree is NULL
 * Otherwise the depth of the actual node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
