#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node
 * Return: A pointer to the created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = binary_tree_node(parent, value);
	if (tmp == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		tmp->right->parent = tmp;
	}
	parent->right = tmp;
	return (tmp);
}
