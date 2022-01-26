#ifndef EDITOR_H
#define EDITOR_H

#include "../include/EditorState.h"

class Editor
{
private:
    std::string content;

public:
    EditorState *createState();
    void restore(EditorState *);
    void setContent(std::string);
    std::string getContent();
};

#endif