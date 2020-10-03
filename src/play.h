//Author: Nathaniel Imel
//Date: 10/3/20
#pragma once
#include "node.h"
#include "process_turn.h"

//iterates through tree for at most 20 questions
void play(Node* root);

//operator<< overload for question to cout
ostream& operator<<(ostream& os, Node* root );
