//Author: Nathaniel Imel
//Date: 10/3/20
#include "play.h"
#include "end.cpp"
#include <iostream>
#include <sstream>
#include <stack>

void play( Node* root ) {
    int child;
    int count = 0;
    Node* current = root;
    stack<Node*> s;
    while ( current != nullptr || !(s.empty()) ) {
        while ( current != nullptr && !current->leaf ) { //traverse the tree.
            child = getResponse( current );
            if (child!=-1) {
                s.push(current); current = current->c[child];
            }
            current = s.top();
            s.pop();
            current = current->c[child];
            count++;
            if ( count > 18 ) {
                cout << "last question!\n";
                end( current );
                return;
            }
        }
        if ( current->leaf ) break;
        
         
    }
    if ( current != nullptr ) {
        end( current );
    }
}

ostream& operator<<(ostream& os, Node* root ) {
    if ( root->leaf ) {
        os << "Is it " << root->data << "?\n";
    }
    else {
        os << root->data << "?\n";
    }
    return os;
}
