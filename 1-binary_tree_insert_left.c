#include "binary_trees.h"

/**
 * binary_tree_t- Inserts a node as the left-child of another
 * node
 * @parent: Pointer to the new node
 * @value: Value to store in new node
 *
 * Return: new node on success or Null otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left = newnode;
		newnode->left->parent = newnode;
	}
	else
	{
		parent->left = newnode;
		newnode->parent = parent;
	}

	return (newnode);
}
