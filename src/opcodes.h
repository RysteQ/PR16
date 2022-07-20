#ifndef _opcodes_h
#define _opcodes_h

typedef enum {
    INC_ACCUMULATOR,
    DEC_ACCUMULATOR,
    ADD_VALUE_REGISTER,
    SUB_VALUE_REGISTER,
    MUL_VALUE_REGISTER,
    DIV_VALUE_REGISTER,
    MOV_VALUE_REGISTER,
    SHIFT_LEFT_BITS_REGISTER,
    SHIFT_RIGHT_BITS_REGISTER,
    LOGICAL_AND_BITS_REGISTER,
    LOGICAL_NOT_REGISTER,
    LOGICAL_XOR_REGISTER,
    COMPARE_REGISTER_REGISTER,
    JUMP_IF_EQUAL_LABEL,
    JUMP_IF_NOT_EQUAL_LABEL,
    JUMP_IF_LESS_THAN_LABEL,
    JUMP_IF_GREATER_THAN_LABEL,
    JUMP_TO_LABEL,
    DEFINE_LABEL,
    INTERRUPT_INTERRUPT_CODE
} Opcodes_T;

#endif