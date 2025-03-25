#include <iostream>
#include "hash.h"

Hash::Hash() {
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = new Node("");
    }
}

int Hash::hashFunction(string key) {
    unsigned int result = 0;    
    
    for (int i = 0; i < 6; i++) {
        result += int(key[i]);
    }
    result = result % tableSize;
        
    return result;
}

void Hash::add(string key) {
    int hashResult = hashFunction(key);
    Node* root = hashTable[hashResult];
    
    bool test = true;

    while(test) {
        if(root->key == ""){
            root->key = key;
            root->numOfRepetition ++;
            
            test = false;
        }
        else if (root->key == key){
            root->numOfRepetition ++;
            
            test = false;
        }
        else {
            if(root->nextNode == nullptr) {
                root->nextNode = new Node("");
            }
            root = root->nextNode;
        }
    }
}

void Hash::printResult() {
    for(int i =0; i < tableSize; i++) {
        if(hashTable[i]->key != "") {
            Node* root = hashTable[i];
            
            while(root != nullptr) {
                cout << root->key << " | " << root->numOfRepetition << endl;
                root = root->nextNode;
            }
        }
    }
}
