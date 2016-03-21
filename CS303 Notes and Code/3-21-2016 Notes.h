//
//  3-21-2016 Notes.h
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 3/21/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#include <list>
using namespace std;

#ifndef __21_2016_Notes_h
#define __21_2016_Notes_h

// Create a function that returns all the items in the tree that start with a given string.

void startsWith(BTNode<Item_Type>* local_root, const Item_Type&target, list<Item_Type>& matches) const {
    if (local_root == NULL)
        return;
    
    if (target == local_root->data.substr(0, target.length)) {
        matches.push_back(local_root->data);
        startsWith  (*local_root->le
    }
    
    else if
}

// Writing an index for a term paper
        
/*
 A max heap orders its nodes in some descending order
 Must be complete (each level except for the last level is filled, and all of the gaps are filled in on the left side).
 Duplicates are allowed
 
 In a min heap, the smallest value is the root.
 
 Heaps can be used as priority queues. You can pop the smallest/lowest priority. It is O(1) to pop and push items. Sorting would not be more than O(nlogn). Insert the item to the next position across the bottom of the complete tree to preserve complementess. 
 Find the values. 
 
 I 
 */

#endif /* __21_2016_Notes_h */
