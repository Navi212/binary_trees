#include "binary_trees.h"

/**
 * binary_tree_leaves- Counts the leaves in a binary Tree
 * @tree: Pointer to the root node of the tree to count the
 * number of leaves
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}

/**
 * binary_tree_is_leaf- Checks if a node is leaf
 * @node: node to check
 *
 * Return: 0 if not leaf or node is NULL
 * Otherwise 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || (node->left && node->right))
		return (0);
	return (1);
}
