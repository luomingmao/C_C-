#include "fsm_with_generalization.h"

State::State()
{
    for (int i = 0; i < range; ++i)
        transition[i] = NULL;
}

Fsm::Fsm(TransGraph* p_tg)
{
    int max_state = 0;  // size for dynamically allocated graph
    for (TransGraph* p_temp = p_tg; p_temp->current_state != 0; ++p_temp)
    {
        if (p_temp->current_state > max_state)
            max_state = p_temp->current_state;
        if (p_temp->next_state > max_state)
            max_state = p_temp->next_state;
    }

    p_state = new State[max_state + 1];
    for (TransGraph* p_temp = p_tg; p_temp->current_state != 0; ++p_temp)
        p_state[p_temp->current_state].transition[p_temp->input_char] = &p_state[p_temp->next_state];

    p_current = NULL;
}

Fsm::~Fsm()
{
    delete []p_state;


void Fsm::Reset()
{
   p_current = &p_state[1];
}

void Fsm::Advance(char c)
{
    if (p_current != NULL)
        p_current = p_current->transition[c];
}

int Fsm::EndState()
{
    return p_current == &p_state[0];
}

int Fsm::DoomState()
{
    return p_current == NULL;
}