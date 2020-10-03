//Author: Nathaniel Imel
//Date: 10/3/20
#pragma once

//get response from user on command-line, calling validate()
int getResponse(Node* root);
int getResponse(string message);
int getResponse();

//get the next line, does not call validate()
string get_line();

//checks whether response was "yes" or "no"
int validate( string response );
