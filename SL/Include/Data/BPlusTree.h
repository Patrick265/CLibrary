#ifndef BPLUSTREE_H_
#define BPLUSTHREE_H_

#include "Definitions/Types.h"

typedef struct BPTLeafNodes
{
    void* data;
} BPTLeafNodes;


typedef struct BPTInternalNode
{
    BPTLeafNodes* nodes;
} BPTInternalNode;

typedef struct BPTRootNode
{
    u32 *indexes;
    BPTInternalNode* nodes;
} BPTRootNode;

typedef struct BPlusTree
{
    u32 maxDegree;
    u32 rootCount;
    u32 nodeMaxKeys;
    BPTRootNode* rootNodes;
} BPlusTree;

void BPTCreate(BPlusTree* tree, u32 maxDegree, u32 indexCount, u32 nodeMaxKeys);
void* BPTSearch(BPlusTree* tree, u32 key);
void BPTInsert(BPlusTree* tree, void* data);
void BPTDelete(BPlusTree* tree, u32 key);
void BPTDestroyTree(BPlusTree* tree);

#endif
