#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: node checked
* Return: 0 if node == NULL or not a leaf, 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
