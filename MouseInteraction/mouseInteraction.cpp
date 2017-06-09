#include "mouseInteraction.h"
#include <cstdio>

MouseInteraction* MouseInteraction::inst = NULL;
MouseInteraction* MouseInteraction::getInstance() {
    if (inst == NULL) {
        inst = new MouseInteraction();
    }

    return inst;
}

int MouseInteraction::getX() {
    return x;
}

int MouseInteraction::getY() {
    return y;
}

