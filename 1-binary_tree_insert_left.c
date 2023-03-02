#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as the left-child.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = binary_tree_node(parent, value);
	if (tmp == NULL)
		return (NULL);
	
	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		tmp->left->parent = tmp;
	}
	parent->left = tmp;
	return (tmp);
}
