//
//  3-14-2016 Notes.h
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 3/14/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#ifndef __14_2016_Notes_h
#define __14_2016_Notes_h

/*
 Data Structures - Midterm Exam Guide
 15 Multiple Choice Questions
 3 questions on Linked Lists, stacks, queues, recursion
 2 programming questions - write code here
 Last question is a pseudo-code question algorithm. 
 
 Look at the summaries at the end of each chapter. Don't spend a lot of time on the multiple-choice questions. 
 Sorting is part of the multiple-choice question
 Programming will mainly be recursion. 
 
 Make sure that pseudocode has programming elements with coding elements. 
 A question on what data structure you would use for some requirements. 
 
 STUDY
 Review questions
 Look at tasks, quizzes
 Slides
 The summaries of the chapters in the textbook
 Projects (e.g. supermarket example)
 Assignments
 
 SLUMBER. SLUMBER. SLUMBER. 
 To
 
 Inserting an item in to a Binary Search Tree (algorithm)
 If root is NULL
    replace empty tree with BLAH he moves fast
 
 TO convert a sorted vector into a binary search tree. 
    To make a node into a root, then pick the middle of the vector (use the size and divide it into half). 
    Keep on dividing by half to get the next node. 
    Partition please until you get to the end.
 
 */

BTNode<Item_Type>* read_from_vector(vector<Item_Type>& vector, int first, int last)
{
    int middle = (first+last)/2;
    BTNode<Item_Type>*root = NULL;
    BTNode<Item_Type>*left = NULL;
    BTNode<Item_Type>*right = NULL;
    
    if (middle < first)
        left = read_from_vector(vector, first, middle -1);
    
    if (middle < last)
        right = read_from_vector(vector, middle+1, last);
    
    if (middle < vector.size())
        root = new  BTNode<Item_Type>(vector[middle], left, right);
    
    return root;
}
/*
 Deleting an item from a BST
 
 item not present: do nothing
 Item present in leaf: 
 If item has one child only, deleting is simple also. 
 */


#endif /* __14_2016_Notes_h */
