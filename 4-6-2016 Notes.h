//
//  4-6-2016 Notes.h
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 4/6/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#ifndef __6_2016_Notes_h
#define __6_2016_Notes_h


#endif /* __6_2016_Notes_h */

/*
Multimaps are maps, but not all keys are unique. 
Maps are sorted by words.

 */

// Task: Write a function that prints the index of a map

// Maps are ordered. Deleting and inserting in a map is O(n) as Maps are ordered alphabetically.
// On average, hash tables are O(n) to insert. However, they are not ordered.
// HASH TABLES
/* They are nested under unordered maps
 Values are given a hash key and stored as an integer value.
 Hash codes can be from Unicode characters, which has 65,536 possible characters. It would be more sensible to store the items in a smaller table (of like 200 elements).
 
 Most functions to generate a hash code, they usually consist of strings and letters/digits rather than a single character. They generally generate a lot of convisions. For example, the hash code for "sign" and "sing" may be the same if the algorithm is the sum of the ASCII values of all characters in the string. 
 With the algorithm on BB, it should be efficient, cheap to compute, and leave less chance of collision. 
 
 If a collision occurs (two keys have the same key), then to deal with it:
    Open Addressing - Linear Probing
    Finding an item with a specific hash key. 
        Calculate the hash code for the key:
        Look up the table by the calculated value
        If it doesn't exist, it means that value doesn't exist
        If it does exist, then we've found it
        Otherwise, there is a match, then we simply increment the value by 1. 
 
 For a small table, it's typically O(n) for inserting. For a large table, it's O(1). 
 
 */