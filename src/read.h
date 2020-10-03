//Author: Nathaniel Imel
//Date: 10/3/20
#include "node.h"
#include "str_and_vec.h"
#include "make_saved_tree.h"
#include <fstream>

//this navigates through the save file and creates a tree
Node* parse_file( string save_file );
