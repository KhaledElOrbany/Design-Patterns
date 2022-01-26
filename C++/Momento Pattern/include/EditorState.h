#ifndef EDITORSTATE_H
#define EDITORSTATE_H

#include <string>

class EditorState
{
private:
    std::string content;
public:
    EditorState(std::string);
    std::string getContent();
};

#endif