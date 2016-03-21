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
        

#endif /* __21_2016_Notes_h */
