#include "binary_trees.h"

/**
 * binary_tree_balance- Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: 0 if tree is NULL
 */
int b_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, balance = 0;

	if (!tree)
		return (0);

	left = b_height(tree->left);
	right = b_height(tree->right);
	balance = left - right;

	return (balance);
}


/**
 * b_height- Determines the height of a binary Tree
 * @tree: The root of the binary tree
 *
 * Return: Height or 0 if tree is NULL
 */
int b_height(const binary_tree_t *tree)
{
	int left, right = 0;

	if (!tree)
		return (0);
	left = b_height(tree->left);
	right = b_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
