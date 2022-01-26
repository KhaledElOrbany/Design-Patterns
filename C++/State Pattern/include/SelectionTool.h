#ifndef SELECTIONTOOL_H
#define SELECTIONTOOL_H

#include <iostream>
#include "../src/Tool.cpp"

class SelectionTool : public Tool
{
private:

public:
    void mouseDown();
    void mouseUp();
};

#endif