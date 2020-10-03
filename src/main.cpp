//Author: Nathaniel Imel
//Date: 10/3/20

#include "default.cpp"
#include "clean.cpp"
#include "options.cpp"
#include "play.cpp"
#include "play_again.cpp"
#include "process_turn.cpp"
#include "read.cpp"
#include "make_saved_tree.cpp"
#include "str_and_vec.cpp"
#include "save.cpp"

//driver method parses command-line args and runs game sequence
int main( int argc, char** argv ) {

    string filename; 
    for (int i = 1; i < argc; i++) {
        if (!strncmp(argv[i], "-h", 2)) {
        // print help if the current string is '-h'
            help(*argv);
            return 0;
        } 
        else if (!strncmp(argv[i], "-f", 2)) {
            // parse string after '-f' as filename
            ++i;
            if (i < argc) { 
                filename = argv[i];
            }
        }
    }

    //gameplay with default or loaded tree
    Node* root;
    if ( !filename.empty() ) {
        root = parse_file( filename );
        if ( !root ) return 1; //perhaps with an exit code
    } else {
        root = starter_tree( root );
    }
    bool again = true;
    while ( again ) {
        play(root);
        again = play_again();
    }
    save(root);
    delete_tree(root);
    
} 
