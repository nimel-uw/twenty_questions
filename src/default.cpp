//Author: Nathaniel Imel
//Date: 10/3/20
#include "default.h"
Node* starter_tree( Node* root ) {
    root = new Node("Is it bigger than a breadbox");
    Node* eggs = new Node("Do you eat it with eggs");
    root->c[0] = eggs;
    Node* money = new Node("Is it worth a lot of money");
    root->c[1] = money;
    Node* code = new Node("Does it write code");
    money->c[1] = code;

    Node* mouse = new Node("a mouse");
    mouse->leaf = true;
    eggs->c[0] = mouse;
    Node* spam = new Node("spam");
    spam->leaf = true;
    eggs->c[1] = spam;

    Node* trash = new Node("a bag of trash");
    trash->leaf = true;
    money->c[0] = trash;

    Node* programmer = new Node("a programmer");
    programmer->leaf = true;
    code->c[1] = programmer;
    Node* house = new Node("a house");
    house->leaf = true;
    code->c[0] = house;
    //I count 8 news
    return root;
}
