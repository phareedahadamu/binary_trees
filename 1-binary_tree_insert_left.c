#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a new node as the left child of another
 *				node.
 * @parent: pointer to the node to insert the left child in
 * @value: int n to be stored in the new node
 * If parent already has a left-child, the new node must take its place, and
 * the old left-child must be set as the left-child of the new node.
 * Return: a pointer to the created node, or NULL on failure or if parent is
 *		NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (parent->left);
}
