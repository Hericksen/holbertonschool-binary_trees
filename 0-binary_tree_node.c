#include "binary_trees.h"
/** */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (node == NULL)
		return (NULL);

	return (node);
}
