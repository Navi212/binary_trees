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

	newnode = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left)
		parent->left->parent = newnode;

	return (newnode);
}
