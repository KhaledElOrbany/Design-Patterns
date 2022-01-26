#include "../include/Canvas.h"
#include "../include/EraserTool.h"
#include "../include/SelectionTool.h"

#define TERMINAL_CLEAR "clear"

int main(int argc, char const *argv[])
{
    std::cout << std::endl;
    system(TERMINAL_CLEAR);
    Canvas *canvas = new Canvas();
    EraserTool *eraserTool = new EraserTool();
    SelectionTool *selectionTool = new SelectionTool();
    canvas->setCurrentTool(selectionTool);
    canvas->mouseDown();
    canvas->mouseUp();

    std::cout << std::endl;
    
    canvas->setCurrentTool(eraserTool);
    canvas->mouseDown();
    canvas->mouseUp();
    delete canvas, selectionTool, eraserTool;
    return 0;
}