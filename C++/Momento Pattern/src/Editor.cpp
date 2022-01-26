#include "../include/Editor.h"

EditorState *Editor::createState()
{
    return new EditorState(this->content);
}

void Editor::restore(EditorState *state)
{
    this->content = state->getContent();
}

std::string Editor::getContent()
{
    return this->content;
}

void Editor::setContent(std::string content) {
    this->content = content;
}
