//Author: Nathaniel Imel
//Date: 10/3/20
#include "play_again.h"
#include "process_turn.h"

bool play_again() {
     string message = "Would you like to play again?\n";
     cout << message;
     bool resp = getResponse(message);
     if (resp) {
        cin.ignore(256, '\n');
     }
     return resp;
}
