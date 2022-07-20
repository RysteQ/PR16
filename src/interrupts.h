#ifndef _interrupts_h
#define _interrupts_h

typedef enum {
    DRAW_TO_SCREEN,
    READ_PIXEL_FROM_SCREEN,

    PRINT_TO_TERMINAL,
    GET_INPUT_FROM_TERMINAL,
    
    WAIT_X_MILLISECONDS,
    CLOSE_APPLICATION,
    RESTART_APPLICATION
} Interrupts_T;

#endif _interrupts_h