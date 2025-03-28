#include "node.cpp"

class Hash {
    private:
        static const int tableSize = 84;
        Node* hashTable[tableSize];
    
    public:

        Hash();

        int hashFunction(string key);

        void add(string key);

        void printResult();
};
