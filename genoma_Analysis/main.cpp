#include "hash.cpp"

int main() {
    Hash hashTable;
    string linha;

    while(true) {
        getline(cin , linha);
        if(linha == "") {
            break;
        }

        int inicio = 0;
        string blocoDeBases;

        for(int i = 0; i < 10; i++) {
            blocoDeBases = linha.substr(inicio, 6);

            hashTable.add(blocoDeBases);

            inicio += 6;    
        }
    }

    hashTable.printResult();

    return 0;
}
