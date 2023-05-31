#include "binary_trees.h"

/**
 * binary_tree_insert_right- Inserts a node as the right child of
 * another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: new node on success otherwise NULL;
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	if (!parent->right)
		parent->right = newnode;
	else
	{
		newnode->right = parent->right;
		parent->right = newnode;
		newnode->right->parent = newnode;
	}

	return (newnode);
}
