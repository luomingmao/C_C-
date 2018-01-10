#ifndef FSM_WITH_EXECUTABLE_CODE_H
#define FSM_WITH_EXECUTABLE_CODE_H

#include <string.h>

class State
{
public:
    virtual State* Transition(char c) = 0;
};

class Fsm
{
public:
    Fsm();
    void Reset();               // move to start state
    void Advance(char c);       // advance one transition
    int EndState();
    int DoomState();

private:
    State* p_current;           // current status, &s1, &s2, ..., &s6; NULL ==> doom
};

class State1 : public State
{
public:
    State* Transition(char c);
};

class State2 : public State
{
public:
    State* Transition(char c);
};

class State3 : public State
{
public:
    State* Transition(char c);
};

class State4 : public State
{
public:
    State* Transition(char c);
};

class State5 : public State
{
public:
    State* Transition(char c);
};

class State6 : public State
{
public:
    State* Transition(char c);
};

#endif //FSM_WITH_EXECUTABLE_CODE_H