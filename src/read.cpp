//Author: Nathaniel Imel
//Date: 10/3/20
#include "read.h"

Node* parse_file( string save_file ) {
  string line, data, left, right;
  vector<string> leaves; //for the repeats
  ifstream file (save_file);
  Node* root;

  if ( !file ) { 
      cout << "Bad file, exiting.\n"; 
      return nullptr; 
  }

    if ( getline( file, line ) ) {
        //initialize tree with root
        data = format_data( line );
        leaves.push_back( data );
        root = new Node( data );

        //and two children
        getline( file, line );
        left = format_data( line );
        leaves.push_back( left );

        getline( file, line );
        right = format_data( line );
        leaves.push_back( right );

        add_children( root, data, left, right );
    }

    while ( getline( file, line ) ) {
        data = format_data( line );

        //check for a parent, i.e. a repeat string data
        if ( contains( leaves, data )) { 

            //attach the "no" and "yes" nodes 
            getline( file, line );
            left = format_data( line );
            leaves.push_back( left );
            getline( file, line );
            right = format_data( line );
            leaves.push_back( right );
              
            //add to the tree and pop parent from leaves
            add_children( root, data, left, right );
            leaves = erase_value( leaves, data ); 
        }
        else if ( !data.empty() ) {
            leaves.push_back(data); 
        } 
    }
    file.close();
    format_leaves(root);
    return root;
}
