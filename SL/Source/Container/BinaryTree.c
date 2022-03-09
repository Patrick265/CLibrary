#include "Container/BinaryTree.h"

#include <stdlib.h>

TreeStatusCode BinaryTreeCreate(BinaryTree* tree)
{
	tree->depth = 0;
	tree->root = malloc(sizeof(BinaryTreeNode));
	// check for malloc failure
	if(tree->root == NULL)
	{
		return TREE_MALLOC_FAILURE;
	}
	tree->size = sizeof(BinaryTreeNode);
	return TREE_SUCCESS;
}

TreeStatusCode BinaryTreeAppend(BinaryTree* tree, i32 key, void* content)
{
	// very first node we do not to check anything
	if(tree->depth == 0)
	{
		tree->root->key = key;
		tree->root->content = content;
		tree->depth++;
		return TREE_SUCCESS;
	}
	// if key is not in the root then traverse the tree otherwise just return
	if(tree->root->key == key)
	{
		return TREE_KEY_DUPLICATE;
	}
	return TREE_SUCCESS;
}

TreeStatusCode BinaryTreeShowContent(BinaryTree* tree)
{
	// TODO implemented, now doing this to remove warnings of unused parameter
	(void)(tree);
	return TREE_SUCCESS;
}
