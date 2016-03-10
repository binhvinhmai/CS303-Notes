//
//  3-9-2016 Notes.hpp
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 3/9/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#ifndef __9_2016_Notes_hpp
#define __9_2016_Notes_hpp

#include <stdio.h>

#endif /* __9_2016_Notes_hpp */


// Implementing a binary tree


/* A node for a Binary Tree. */
template<typename Item_Type>
struct BTNode
{
    // Data Fields
    Item_Type data;
    BTNode<Item_Type>* left;
    BTNode<Item_Type>* right;
    
    // Constructor
    BTNode(const Item_Type& the_data,
           BTNode<Item_Type>* left_val = NULL,
           BTNode<Item_Type>* right_val = NULL) :
    data(the_data), left(left_val), right(right_val) {}
    
    // Destructor (to avoid warning message)
    virtual ~BTNode() {}
    // to_string
    virtual std::string to_string() const {
        std::ostringstream os;
        os << data;
        return os.str();
    }
}; // End BTNode

template<typename Item_Type>
class Binary_Tree
{
    Binary_Tree(BTNode<Item_Type>* new_root) :
    root(new_root) {}
    
    // Data Field
    BTNode<Item_Type>* root;
    
    ///// Get subtrees
    
    Binary_Tree<Item_Type> get_left_subtree() const {
        if (root == NULL) {
            throw std::invalid_argument("get_left_subtree on empty tree");
        }
        return Binary_Tree<Item_Type>(root->left);
    }
    
    Binary_Tree<Item_Type> get_right_subtree() const {
        if (root == NULL)
            throw std::invalid_argument("get_right_subtree on null tree");
        
        return Binary_Tree<Item_Type>(root->right);
    }
    
    bool is_leaf() const {
        if (root != NULL)
            return root->left == NULL && root->right == NULL;
        
        return true;
    }
    
    ///// To string returns the tree as a string, which can later be implemented as a binary tree.
    string to_string() const {
        ostringstream os;
        
        // As the string goes down, it'll go get each node's string. So it'll go down until it
        // hits a leaf, check if there are any subtrees off of the node, and then move back up and
        // check if the parent has any subtree. Eventually, it'll get to a point where everything is null. Then i'tll be done.
        if (is_null())
            os << "NULL\n";
        else {
            os << *root << '\n'; //append the data in the root
            /*call the same function recursively on the left and right subtrees, append the returned value*/
            os << get_left_subtree().to_string();
            os << get_right_subtree().to_string();
        }
        return os.str();
    }
    
    ///// POPULATING THE BINARY TREE

    Binary_Tree<Item_Type> read_binary_tree(vector<string>& text, int& i) {
        /*if we are at the end of the string vector or the item we are at is NULL,
         return an empty binary tree*/
        if (i>text.size()-1 || text[i]=="NULL")  {
            ///// BASE CASE. Once we hit null, return an empty tree.
            return Binary_Tree<Item_Type>();
        }
        else {
            string txt = text[i];/* read the root data*/
            /* read the left and right subtrees, advance i to read the next data items*/
            Binary_Tree<Item_Type> left = read_binary_tree(text,++i);
            Binary_Tree<Item_Type> right = read_binary_tree(text,++i);
            return Binary_Tree<Item_Type>(txt, left, right);
        }
    }
    
    int height() const {
        if (is_null())
            return 0;
        
        
        ///// Recursiveness, very confusing
        
        int left_height= get_left_subtree().height();
        int right_height= get_right_subtree().height();
        
        return 1 + max(left_height, right_height);
    }
    
    int depth(BTNode<Item_Type>* node, BTNode<Item_Type>* root){
        if (node == root)
            return 0;
        if (root == NULL)
            return -1;
        
        int ld = depth(node, root->left);
        if (ld > -1)
            return 1 + ld;
        
        int rd=depth(node, root->right); //try finding it in the right
        
        if (rd > -1)
            return 1 + rd;
        
        return -1; //didn't find the node
    }

};  


