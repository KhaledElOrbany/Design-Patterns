#include "../include/Canvas.h"

Canvas::Canvas()
{
}

Canvas::~Canvas()
{
    delete currentTool;
}

void Canvas::mouseDown()
{
    currentTool->mouseDown();
}

void Canvas::mouseUp()
{
    currentTool->mouseUp();
}

void Canvas::setCurrentTool(Tool *currentTool)
{
    this->currentTool = currentTool;
}
