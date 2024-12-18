#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 *
 * @node: pointer to the node to check
 * Return: 1 if node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL) /* it can't be a root if node = NULL */
		return (0);

	if (node->parent == NULL) /* check if node is a root */
		return (1);

	return (0);
}
