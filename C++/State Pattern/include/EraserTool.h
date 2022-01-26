#ifndef ERASRTOOL_H
#define ERASRTOOL_H

#include <iostream>
#include "../include/Canvas.h"

class EraserTool : public Tool
{
public:
    void mouseDown();
    void mouseUp();
};

#endif