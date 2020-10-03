//Author: Nathaniel Imel
//Date: 10/3/20
#include "process_turn.h"

int getResponse(Node* root) { 
    int direction = -1;
    string response;
    if ( root != nullptr ) {
        do {
            cout << root;
            char c = cin.get();
            while ( c == '\n' ) {
                cout << root;
                c = cin.get();
            }
            cin.putback(c);
            cin >> response;
            cin.ignore(256, '\n');
        } 
        while( validate(response)==-1 );
        direction = validate(response);


    }
    return direction;
}

int getResponse() {
    int direction = -1;
    string response;
    do {
        char c = cin.get();
        while ( c == '\n' ) {
            c = cin.get();
        }
        cin.putback(c);
        cin >> response;
        cin.ignore(256, '\n');
    } 
    while( validate(response)==-1 );
    direction = validate(response);
    return direction;
}

int getResponse( string message ) {
    string response;
    do {
        char c = cin.get();
        while ( c == '\n' ) {
            cout << message;
            c = cin.get();
        }
        cin.putback(c);
        cin >> response;
    } 
    while( validate(response)==-1 );
    return validate(response);
}

string get_line() {
    string response;
    char c = cin.get();
    while ( c == '\n' ) {
        c = cin.get();
    }
    cin.putback(c);
    getline(cin, response);
    return response;
}

int validate( string response ) {
    if ( response == "Yes" || response == "yes" ) {
        return 1;
    }
    if ( response == "No" || response == "no" ) {
        return 0;
    }
    return -1;
}
