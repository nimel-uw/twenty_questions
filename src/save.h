//Author: Nathaniel Imel
//Date: 10/3/20
#pragma once
#include "node.h"

//writes questions and answers to a file
void save( Node* root );

//operator<< overload for writing questions to file
ofstream& operator<<(ofstream& fs, Node* root );

//organizes questions with pre-order traversal
void preorder_format(ofstream& fs, Node* root );
