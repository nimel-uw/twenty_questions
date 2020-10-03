//Author: Nathaniel Imel
//Date: 10/3/20

#pragma once
#include <algorithm>
#include <string>
#include <vector>

//if v contains key
bool contains( vector<string> v, string data );

//erase from v by key
vector<string>& erase_value( vector<string>& v, string data );

//remove the "Q: " and "No/Yes: " substrings
string format_data ( string line );
