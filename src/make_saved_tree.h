//Author: Nathaniel Imel
//Date: 10/3/20
#pragma once
#include "node.h"
#include <string>

//adds children to a node by value
void add_children( Node* root, string key, string left, string right );

//removes the "Is it " string
void format_leaves( Node* root );
