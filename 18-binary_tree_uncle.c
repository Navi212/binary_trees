#include "binary_trees.h"

/**
 * binary_tree_uncle- Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: NULL if node is NULL, or has no uncle
 * Otherwise return uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_p, *sub_p;

	if (!node || !(node)->parent)
		return (NULL);
	sub_p = node->parent;
	grand_p = sub_p->parent;
	if (grand_p)
	{
		if (grand_p->left == sub_p)
			return (grand_p->right);
		return (grand_p->left);
	}
	return (NULL);
}
