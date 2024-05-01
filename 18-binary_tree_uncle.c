#include "binary_trees.h"

/**
 * binary_tree_uncle- finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle or NULL if the node is NULL or has no Uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	tmp = node->parent->parent;
	if (tmp->left == node->parent && tmp->right != NULL)
		return (tmp->right);
	if (tmp->right == node->parent && tmp->left != NULL)
		return (tmp->left);
	return (NULL);
}
