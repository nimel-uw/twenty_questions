//Author: Nathaniel Imel
//Date: 10/3/20
#include <fstream>
#include "save.h"
#include "process_turn.h"

void save( Node* root ) {
    string msg = "Would you like to save the game?\n"; 
    if ( getResponse( msg ) ) {
        cout << "Please enter a filename to save the game: \n";
        string filename = get_line();
        ofstream fs; 
        fs.open(filename);
        preorder_format(fs, root);
        fs.close();
        cout << "Game saved.\n";
    //parse_file( filename );
    }
    cout << "Thank you for playing. Goodbye!\n";


}

void preorder_format(ofstream& fs, Node* root ) {
    if ( root != nullptr ) {
        if ( !(root->leaf) ) {
            fs << "Q: " << root; 
            fs << "No: " << root->c[0];
            fs << "Yes: " << root->c[1];
            fs << '\n';
            preorder_format(fs, root->c[0]);
            preorder_format(fs, root->c[1]);
        }
    }
}
