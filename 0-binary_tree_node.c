#include "binary_trees.h"

/**
 * binary_tree_node - That creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value:: is the value to put in the new node
 * Return: ret.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ret;

	ret = malloc(sizeof(*ret));
	if (!ret)
		return (NULL);
	ret->right = ret->left = NULL;
	ret->parent = parent;
	ret->n = value;
	return (ret);
}
