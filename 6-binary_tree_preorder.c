#include "binary_trees.h"

/**
 * binary_tree_preorder- Goes through a binary tree using pre-order
 * traversal
 * @tree: Pointer to the root node of the tree to trasverse
 * @fun: A pointer to a function to call for each node
 *
 * Return: If tree or fun is NULL do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
