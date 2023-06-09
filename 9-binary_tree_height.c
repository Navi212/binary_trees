#include "binary_trees.h"

/**
 * binary_tree_height- Measures the height of a binary Tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!(tree) || (!(tree)->left && !(tree)->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
