#include "Data/BPlusTree.h"

#include <stdlib.h>

void BPTCreate(BPlusTree* tree, u32 maxDegree, u32 indexCount, u32 nodeMaxKeys)
{
	tree->maxDegree = maxDegree;
	tree->rootCount = 2; // The root has atleast 2 children
	tree->nodeMaxKeys = nodeMaxKeys;
	tree->rootNodes = malloc(sizeof(BPTRootNode) * 2);

}

void* BPTSearch(BPlusTree* tree, u32 key)
{
	// first check the root node index
	return 0;
}

void BPTInsert(BPlusTree* tree, void* data)
{

}

void BPTDelete(BPlusTree* tree, u32 key)
{

}

void BPTDestroyTree(BPlusTree* tree)
{
	free(tree->rootNodes);
}
