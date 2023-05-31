#include "binary_trees.h"

/**
 * binary_tree_node- Creates a binary Tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the node
 *
 * Return: A pointer to the new node on success otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
