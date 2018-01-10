#include "fsm_with_executable_code.h"

State1 s1;
State2 s2;
State3 s3;
State4 s4;
State5 s5;
State6 s6;

Fsm::Fsm()
{
    p_current = NULL;
}

void Fsm::Reset()
{
    p_current = &s1;
}

void Fsm::Advance(char c)
{
    if(p_current != NULL)
        p_current = p_current->Transition(c);
}

int Fsm::EndState()
{
    return p_current == &s6;
}

int Fsm::DoomState()
{
    return p_current == NULL;
}

State* State1::Transition(char c)
{
    switch(c)
    {
    case 'A':
        return &s2;
    case 'B':
        return &s3;
    case 'C':
        return &s4;
    case 'D':
        return &s5;
    case '\0':
        return NULL;
    default:
        return NULL;
    }
}

State* State2::Transition(char c)
{
    switch(c)
    {
    case 'E':
        return &s2;
    case 'I':
        return &s6;
    case '\0':
        return NULL;
    default:
        return NULL;
    }
}

State* State3::Transition(char c)
{
   switch(c)
   {
    case 'F':
        return &s3;
    case 'M':
        return &s4;
    case 'J':
        return &s6;
    case '\0':
        return NULL;
    default:
        return NULL;
    }
}

State* State4::Transition(char c)
{
    switch(c)
    {
    case 'G':
        return &s4;
    case 'K':
        return &s6;
    case '\0':
        return NULL;
    default:
        return NULL;
    }
}

State* State5::Transition(char c)
{
    switch(c)
    {
    case 'O':
        return &s2;
    case 'H':
        return &s5;
    case 'L':
        return &s6;
    case 'N':
        return &s4;
    case '\0':
        return NULL;
    default:
        return NULL;
    }
}

State* State6::Transition(char c)
{
    return NULL;
}

