//
//  main.cpp
//  CS303 Notes and Code
//
//  Created by Binh Vinh Mai on 3/7/16.
//  Copyright © 2016 Binh Vinh Mai. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void List_Insertion_Sort(list<int> &num)
{
    list<int>::iterator iter = num.begin();
    list<int>::iterator current = num.begin();
    
    // Create variables
    int key;
    bool insertionNeeded;
    
    for (current = ++iter; current != num.end(); ++current)
    {
        key = *iter;
        insertionNeeded = false;
        if (key < *current)
        {
            
        }

    }
    
    /*
    for (j = 1; j < num.size(); j++) {
        key = num[j];
        insertionNeeded = false;
        for (i = j - 1; i >= 0; i--){ // larger values move right
            
            if (key < num[i]) {
                num[i + 1] = num[i];
                insertionNeeded = true;
            }
            else
                break;
        }
        if (insertionNeeded){
            
            num[i + 1] = key; //Put key into its proper location
        }
    }*/
}