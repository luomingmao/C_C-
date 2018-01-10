#ifndef FSM_WITH_GENERALIZATION_H
#define FSM_WITH_GENERALIZATION_H

#include <string.h>
#include <limits.h> // CHAR_MAX

const int range = CHAR_MAX + 1;

class State
{
public:
    State();
    State* transiztion[range];
};

struct TransGraph
{
    int current_state;
    char input_char;
    int next_state;
};

class Fsm
{
public:
    Fsm(TransGraph* p_tg);
    virtual ~Fsm();
    void Reset();
    void Advance(char c);
    int EndState();
    int DoomState();

private:
    State* p_current;
    State* p_state;
};

#endif //FSM_WITH_GENERALIZATION_H