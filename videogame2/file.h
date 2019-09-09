#ifndef FILE_H
#define FILE_H
#include <character.h>
#include <fstream>
#include <cstring>
using namespace std;

class File
{
public:
    File();
    void add();
    void load();
    bool authenticate();
    void modify();
    void show();
    void complete();
    void remove();
private:
    Character *c;
    string name;
    string guild;
    string gender;
    string type;
    size_t exp;
    size_t level;
};

#endif // FILE_H
