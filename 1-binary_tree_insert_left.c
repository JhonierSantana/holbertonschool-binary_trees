#include "binary_trees.h"

/**
 * *binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value:: is the value to put in the new node
 * Return: ret.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);

}
