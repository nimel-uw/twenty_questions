//Author: Nathaniel Imel
//Date: 10/3/20
#include "make_saved_tree.h"

void add_children( Node* root, string key, string left, string right ) {
    if ( root ) {
        if ( root->data == key ) {
            root->leaf = false;
            root->c[0] = new Node(left);
            root->c[0]->leaf = true;
            root->c[1] = new Node(right);
            root->c[1]->leaf = true;
            return;
        }
        add_children( root->c[0], key, left, right );
        add_children( root->c[1], key, left, right );
    }
}

void format_leaves( Node* root ) {
    if ( root ) {
        if (root->leaf) {
            string sub = root->data;
            sub = sub.substr(6);
            root->data = sub;
        }
        format_leaves( root->c[0] );
        format_leaves( root->c[1] );
    }
}

