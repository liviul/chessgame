#ifndef M_INTERACTION_CPP
#define M_INTERACTION_CPP

#include <SDL.h>

typedef enum  {
    MOUSE_CLICK = 1,
    MOUSE_HOLD,
    MOUSE_DBL_CLICK,
    MOUSE_UP
} MOUSE_STATE;

class MouseInteraction {
private:
    int x;
    int y;
    bool mouseDown;
    bool mouseUp;
    bool mouseMove;
    static MouseInteraction *inst;
    MouseInteraction() {};
public:
    static MouseInteraction *getInstance();
    int getX();
    int getY();
    MOUSE_STATE getMouseInteraction(SDL_Event *e);
};


#endif // M_INTERACTION_CPP
