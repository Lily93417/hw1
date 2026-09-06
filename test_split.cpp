/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <iostream>
#include <cstddef>
using namespace std;
int main(int argc, char* argv[])
{
  Node* in = new Node(1,
    new Node(2,
    new Node(3,
    new Node(4,
    new Node(5, NULL)
    ))));
  
  Node* odds = NULL;
  Node* evens = NULL;
  split(in, odds, evens);
  
  cout << "Odds: ";
  Node* current = odds;
  while (current != NULL) {
    cout << current->value << " ";
    current = current->next;

  }
  cout << endl;

  cout << "Evens: ";
  current = evens;
  while (current != NULL) {
    cout << current->value << " ";
    current = current->next;

  }
  cout << endl;
  return 0;
}
