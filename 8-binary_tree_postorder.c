#include "binary_trees.h"

/**
 * binary_tree_postorder- Goes through a binary tree using post-order
 * traversal
 * @tree: Pointer to the root node of the tree to trasverse
 * @fun: A pointer to a function to call for each node
 *
 * Return: If tree or fun is NULL do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
