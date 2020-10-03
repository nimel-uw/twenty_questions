//Author: Nathaniel Imel
//Date: 10/3/20
#include <iostream>
#include "options.h"
using namespace std;

static void help(const char* name) {
  cout << "Usage: " << name << " [-h] [-f filename] \n";
  cout << "Options:\n\n";
  cout << "  -h   Show this text.\n";
  cout << "  -f   Load a game tree from a file\n";
}
