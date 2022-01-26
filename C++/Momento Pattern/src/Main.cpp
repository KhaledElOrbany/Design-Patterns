#include <iostream>
#include "../include/Editor.h"
#include "../include/History.h"

#define TERMINAL_CLEAR "clear"

int main(int argc, char const *argv[])
{
    std::cout << std::endl;
    system(TERMINAL_CLEAR);
    Editor *editor = new Editor();
    History *history = new History();

    editor->setContent("a");
    history->push(editor->createState());
    editor->setContent("b");
    history->push(editor->createState());
    editor->setContent("c");
    history->push(editor->createState());

    history->print();

    editor->restore(history->pop());
    std::cout << editor->getContent() << std::endl;
    editor->restore(history->pop());
    std::cout << editor->getContent() << std::endl;
    editor->restore(history->pop());
    std::cout << editor->getContent() << std::endl;


    delete editor, history;
    return 0;
}