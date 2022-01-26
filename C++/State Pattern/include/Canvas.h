#ifndef CANVAS_H
#define CANVAS_H

#include "../include/SelectionTool.h"

class Canvas
{
private:
    class Tool *currentTool;

public:
    Canvas();
    ~Canvas();
    void mouseDown();
    void mouseUp();
    void setCurrentTool(Tool *currentTool);
};

#endif