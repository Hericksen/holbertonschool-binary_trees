#include "binary_trees.h"
/**
 * binary_tree_insert_left
 *
 * @parent: a pointer to the node to insert the left-chil
 * @value: the value to store in the new node
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(new_node, value);
	new_node->parent = parent;
	new_node->n = value;
	
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
		parent->left = new_node;

	return (new_node);
}