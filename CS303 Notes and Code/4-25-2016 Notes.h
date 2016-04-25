//
//  4-25-2016 Notes.h
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 4/25/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#ifndef __25_2016_Notes_h
#define __25_2016_Notes_h


#endif /* __25_2016_Notes_h */

/* Red Black Trees! 
 
 rebalance_left:
 If the child is red and not null, and the right child is red: 
 
 If the child is red, and the parent is red, flip the colors of the nodes. And then rotate. 
 
 Always make sure that the parent and child are on the same side. So rotating may be necessary. 
 
 When we insert a red item, we call the rebalance_right if the node we're working on is on the right of the tree. 
 Ultimately, we call rebalance_left and rebalance_right depending on location for tree.
 
 2-3 Trees, inserting cat, hat, and apple
 apple is so small, and the 'The' node is so small it goes right into it
 cat goes into the node below 'brown', but since it's 3, you have to reorder everything. So the middle child is dog, so it goes into the parent node. 
 Cat is instead reordered into a child below it
 
 */

// TASK: Inorder traversal of a 2-3 tree.
/*
 Recursive function
 If the node we're examining is NULL, then return
 
 Go left until we get to the farthest left node
 Read all of the data
 Return
 
 If we're at a node, look for middle child
 If we're at a middle child
 Output first item
 
 
 If we reach a node: If it has left child, go left
 If it has middle child, output first item in node, and then output items in the middle
 If it has right child, then IDK time to stOP thiknking
 
*/

void inorder(Node* local_root, std::ostream& out) {
    if (local_root != NULL) {
        if local_root->size == 2) {
            inorder(local_root->left, out);
            out << local_root->datal << " ";
            inorder(local_root->middle, out);
            out << local_root->data2 << " ";
            inorder(local_root->right, out);
        }
        else {
            inorder(local_root->left, out);
        }
        }
    }
}