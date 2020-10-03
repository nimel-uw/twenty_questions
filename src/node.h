//Author: Nathaniel Imel
//Date: 10/3/20
#pragma once
#include <string>
using namespace std;

//how the computer's "knowledge" is stored for yes/no navigation 
class Node {
public:
   Node* c[2] = {nullptr, nullptr}; // 'c' for children
   string data;
   bool leaf; 

   Node ( string d ) 
   : data{d}
   {}

   Node() = default;

};
