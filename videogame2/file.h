#ifndef FILE_H
#define FILE_H
#include <character.h>
#include <fstream>
#include <cstring>
using namespace std;

class File
{
public:
    friend class Character;
    File();
    void add();
    void load();
    void authenticate(char * search);
    void modify(char *searchName);
    void show();
    void complete();
    void remove();
};

#endif // FILE_H
