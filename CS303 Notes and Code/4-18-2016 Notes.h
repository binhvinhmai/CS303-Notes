//
//  4-18-2016 Notes.h
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 4/18/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#ifndef __18_2016_Notes_h
#define __18_2016_Notes_h


#endif /* __18_2016_Notes_h */

/*
 Unbalanced Binary Search Trees have O(n) to find a node, especially if unbalanced
 
 Rotation allows us to balance the tree. We rotate right around the root, which becomes the right child of its current child. 
 Thus we shift nodes around. 
 All of the values in the BST must still make it so that it's a BST. Fix the height without changing the precondition 
 of the BST. 
 
 Rotating around the left means that the root will be a child for its left child. 
 
 'apple' goes to the right
 'cat' goes to the right
 
 4/20/2016 Notes
 The basic building block of AVL trees is an AVL node
 Each AVL node keeps track of the height of the right subtree and the heigh of the left subtree. 
 When we ad/delete nodes, we might change the left height or the right height of the parent. Then, by means of recursion, we perform rotations if the parent's balance is +2 or -2. When it hits +-2, we rebalance it. 
 
 Balance is right height - left height
 
 An int is: 
 if (rh > lh):
    return rh
 else
    return lh
 
 the max height is the number of nodes from a leaf node to a root node
 Always make sure that heights are updated and correct no matter what. 
 
 When we insert into an AVL Tree, we update the left height because if we have a left child. If the balance is <= -2, then we must rebalance. Inserting is a recursive function - as it finds the right spot, it'll recursively go down the tree. And find the spot. Once it finds the right spot, it'll start calling back out and updating the height as it goes. 
 
 Will rotate as necessary. 
 
****************LECTURE 17 Red-Black Trees
 It's another kind of self-balancing trees. This is guaranteed a performance of O(log n) for insertion/etc. Other trees are on average O(log n). 
 there are some rules to be aware of. 
 1. A node is eithe red or black. 
 2. The root is always black. 
 3. A red node must always have black children. A NULL pointer is considered to refer to black node. 
 4. The number of black nodes in any path from the root to a leaf is the same (the root node's left and right subtrees must be the same black-height). 
 
 To insert into a red-black tree: 
 1. Search for where the item belongs based on binary search algorithm. 
 2. When item is found, initally given the color red. 
 3. If parent is black, we're done. 
 If the parent is red, we violated invariant 3. So to fix it, we change the color of the parent, sibling, and grandparent.
 Situation 1: If the parent is red, but doesn't have a sibling: to maintain invariant 3, we change the parent and the grandparent colors. If it breaks the rule, we rotate. 
 
 If the sibling is the same color, change the color of the sibling, the parent, and the grandparent. To fix it, we have to have the siblings have the same color. Siblings must be the same color. 
 
 
 */