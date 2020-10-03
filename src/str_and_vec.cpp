//Author: Nathaniel Imel
//Date: 10/3/20
#include "str_and_vec.h"

bool contains( vector<string> v, string data ) {
    if ( !v.empty() && find(v.begin(), v.end(), data) != v.end() ) {
        return true;
    }
    return false;
}

vector<string>& erase_value( vector<string>& v, string data ) {
    v.erase(std::remove(v.begin(), v.end(), data), v.end());
    return v;
}

string format_data( string line ) {
    string data;
    if ( line.size() > 0 ) {
        if (line[0] == 'Q' ) {
           data = line.substr(3);
           data.pop_back();
           return data;
            //if haven't seen before, create node. 
            //if you have, attach the next two nodes to left and right.
           
        }
        else if (line[0] == 'N') {
           data = line.substr(4);
           data.pop_back();
           return data;
        }
        else {
            data = line.substr(5);
            data.pop_back();
            return data;
            }
    }
    return data;
}
