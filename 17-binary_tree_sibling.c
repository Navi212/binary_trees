#include "binary_trees.h"

/**
 * binary_tree_sibling- Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: NULL if node, parent is NULL or has no sibling
 * Otherwise returns the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node)->parent)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
