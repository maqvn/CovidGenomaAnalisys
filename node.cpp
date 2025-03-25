#include <string>
using namespace std;

struct Node {
    int numOfRepetition;
    string key;
    Node* nextNode;

    Node(string key) {
        this->key = key;
        numOfRepetition = 0;
        nextNode = nullptr;
    }
};