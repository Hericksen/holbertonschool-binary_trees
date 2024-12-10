#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: a pointer to the node to insert the right-chil
 * @value: the value to store in the new node
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
		parent->right = new_node;

	return (new_node);
}
