#include "../include/History.h"

void History::push(EditorState *state)
{
    states.push_back(state);
}

EditorState *History::pop()
{
    int lastIndex = states.size() - 1;
    EditorState *temp = states.at(lastIndex);
    states.pop_back();
    return temp;
}

void History::print()
{
    for (int i = 0; i < states.size(); i++)
        std::cout << states.at(i) << " ";
    std::cout << std::endl;
}