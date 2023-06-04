#include "binary_trees.h"

/**
 * binary_tree_nodes- Counts the nodes with at least one child
 * in a binary Tree
 * @tree: Pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, count = 0;
	
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count++;
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	count += left + right;

	return (count);
}
