#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a new node as the right child of another
 *				node.
 * @parent: pointer to the node to insert the right child in
 * @value: int n to be stored in the new node
 * If parent already has a right-child, the new node must take its place, and
 * the old right-child must be set as the right-child of the new node.
 * Return: a pointer to the created node, or NULL on failure or if parent is
 *		NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (parent->right);
}
