#include "binary_trees.h"

/**
 * find_parent_node - Finds the parent of the node that needs to be inserted
 * @tree: Pointer to the node
 * @value: Compare value
 *
 * Return: Pointer to a node
 */
bst_t *find_parent_node(bst_t *tree, int value)
{
        if (value == tree->n)
                return (tree);
        if (tree->left && value <= tree->n)  
                tree = find_parent_node(tree->left, value);
        else if (tree->right && value > tree->n)
                tree = find_parent_node(tree->right, value);
        return (tree);
}


/**
 * bst_insert - Inserts a node in a binary tree
 * @tree: Pointer to a pointer to the root of the tree
 * @value: Value to be inserted
 *
 * Return: Pointer to the node
 * Otherwise NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *hold, *node;

	if (!tree)
		return (NULL);
	node = binary_tree_node(NULL, value);
	if (!node)
		return (NULL);
	if (!(*tree))
		*tree = node;
	else
	{
		hold = find_parent_node(*tree, value);
		node->parent = hold;
		if (value == hold->n)
		{
			free(node);
			node = NULL;
		}
		else if (value < hold->n)
			hold->left = node;
		else if (value > hold->n)
			hold->right = node;
	}
	return (node);
}
