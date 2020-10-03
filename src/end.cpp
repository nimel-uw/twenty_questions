//Author: Nathaniel Imel
//Date: 10/3/20
#include "end.h"

void end( Node* leaf ) {
    if ( !getResponse(leaf) ) {
        cout << "Ok, what was it?\n";
        add_item(leaf);
        } else {
            cout << "I win!\n";
        }
}

void add_item(Node* root) {
    string data, question, response;
    int child = -1;

    data = get_line();
    cout << "What is a question that would differentiate it from "
         << root->data << "?\n";
    question = get_line();
    string message = "And would the answer to " + question + " be yes or no?\n";
    cout << message;
    while( child == -1 ) {
        child = getResponse(message);
    }

    string tmp = root->data;

    Node* old = new Node(tmp);
    old->leaf = true;
    Node* new_item = new Node(data);
    new_item->leaf = true;
    root->data = question;        
    root->leaf = false;
    root->c[child] = new_item; //add leaf as correct answer to question
    root->c[!child] = old; //add the other leaf to the otherr side
    
    cin.ignore(256, '\n');
}
