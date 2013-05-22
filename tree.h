#ifndef _TREE_H_
#define _TREE_H_

#include "types.h"

Tree* createTree ();
TreeNode* createTreeNode ();

void destroyTree (Tree* tree);

TreeNode* getTreeNode (Tree* tree);
TreeNode* getTreeLeft (Tree* tree);
TreeNode* getTreeRight (Tree* tree);

#endif

