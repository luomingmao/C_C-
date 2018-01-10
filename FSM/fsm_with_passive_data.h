#ifndef FSM_WITH_PASSIVE_DATA_H
#define FSM_WITH_PASSIVE_DATA_H

#include <string.h>
#include <limits.h> // CHAR_MAX

const int range = CHAR_MAX + 1;

class State
{
public:
    State();
    State* transition[range];
};

struct TransGraph   // use triple to describe map
{
    int current_state;
    char input_char;
    int next_state;
};

calss Fsm
{
public:
    Fsm();
    void Reset();           // move to start state
    void Advance(char c);   // advance one transition
    int EndState();
    int DoomState();

private:
    State* p_current;   // &s1, &s2, ..., &s6; NULL ==> doom
    State state[6];     // 6 states, state[0] is end state
};

#endif //FSM_WITH_PASSIVE_DATA_H