//Author: Nathaniel Imel
//Date: 10/3/20
#include "clean.h"

void delete_tree( Node* root ) {
    if (root) {
        delete_tree(root->c[0]);
        delete_tree(root->c[1]);
        delete root;
    }
}
