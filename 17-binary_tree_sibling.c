#include "binary_trees.h"

/**
 * binary_tree_sibling- Finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: a pointer to the sibling or NULL if the node is NULL, the parent is
 *		NULL, or the node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	tmp = node->parent;
	if (tmp->left == node && tmp->right != NULL)
		return (tmp->right);
	if (tmp->right == node && tmp->left != NULL)
		return (tmp->left);
	return (NULL);
}
