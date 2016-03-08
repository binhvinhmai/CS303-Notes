//
//  3-7-2016 Notes.hpp
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 3/7/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#ifndef __7_2016_Notes_hpp
#define __7_2016_Notes_hpp

#include <stdio.h>

/* The OddEvenSort is really designed to run on two different servers - one would be handling the odd and the other would be handling the even files.
 */
void OddEvenSort()
{
    bool sorted = false
    while (!sorted)
    {
        sorted = true;
        for (int i = 1; i < a.size() - 1; i+=2)
        {
            // Code will need to pasted in here.
        }
        
    }
}


/* We have been working on linear data structures. They're usually slow to insert/delete or access. 
 Trees are non-linear and abstract data structures. 
 
 TREES consist of NODES (usually represented by circles). Nodes can represent anything.
 They also have edges are lines that connect nodes to show relation.
 
 GRAPHS are special trees that have no hierarchy. Trees have hierarchy.
 
 TREES LABELING & TERMINOLOGY ************************************************************
 
 Node at the top of the tree is called a ROOT
 Successor of a node = CHILDREN.
 Node w/o children are LEAVES.
 ANCESTORS/DESCENDANTS are versions of PARENT/CHILD relationship of nodes.
 
 BRANCHES A subtree of a node is a tree whose root is a child of that node.
 
 DEPTH of a node is a measure of its distance from the root. It's depth is usually 1+ the depth of its parent. It's slightly recursive.
 
 
 The HEIGHT of a node is the number of the nodes in the longest from that node to a leaf node. So essentially. There are multiple paths to determine heights (for example, a root can have multiple heights). You label different heights and then find the greatest length to determine the height.
 
 BINARY TREES ************************************************************
 In a binary tree, each node has at most two branches.
 
 They have FULLNESS - considered full if a node has 0 or 2 children. 
 COMPLETENESS - there should be no gaps that are filled on the left hand side. All levels have to be filled except for the last one. 
 
 EXPRESSION TREES ************************************************************
 When trees have operators - know that each subtree is essentially a subtree. You can easily move left to right, and connect children nodes as values to the parent node which is typically an operator. Be sure to put parantheses around your expressions as values can change.
 
    */

// TASK
// Draw binary expression trees for the ones on screen. Page 21 in Book.

/* Logarithmic behavior for searching a binary tree is O(logn) as you split the tree in half. SEARCHING TREES ************************************************************

1. If tree is empty, return NULL
2. IF target equals to root node's data, return that data
3. If target < root node data, return search (left subtree)
4. Otherwise, return search (right subtree).

What's nice is that we can add/delete trees with O(logn). Inserting and deleting items from a vector may be O(n).
 
 TASK - 22. 
 Please note that to make it a Binary Search Tree, make sure that all values are leading.
 */

#endif /* __7_2016_Notes_hpp */
