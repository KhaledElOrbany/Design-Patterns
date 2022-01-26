#include "../include/EditorState.h"

EditorState::EditorState(std::string content)
{
    this->content = content;
}

std::string EditorState::getContent()
{
    return this->content;
}