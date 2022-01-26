#ifndef HISTORY_H
#define HISTORY_H

#include <iostream>
#include <vector>
#include "../include/EditorState.h"

class History
{
private:
    std::vector<EditorState *> states;

public:
    void print();
    void push(EditorState *);
    EditorState *pop();
};

#endif