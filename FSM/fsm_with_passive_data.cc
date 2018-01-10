#include "fsm_with_passive_data.h"

State::State()
{
    for (int i = 0; i < range; ++i)
        transition[i] = NULL;
}

Fsm::Fsm()
{
    static TransGraph graph[] =
    {
        {1, 'A', 2}, {1, 'B', 3}, {1, 'C', 4}, {1, 'D', 5},
        {2, 'E', 2}, {2, 'I', 0},
        {3, 'F', 3}, {3, 'J', 0}, {3, 'M', 4},
        {4, 'G', 4}, {4, 'K', 0},
        {5, 'H', 5}, {5, 'L', 0}, {5, 'O', 2}, {5, 'N', 4},
        {0, 0, 0}
    };

    for (TransGraph* p_tg = graph; p_tg->current_state != 0; ++p_tg)
        state[p_tg->current_state].transition[p_tg->input_char] = &state[p_tg->next_state];

    p_current = NULL;
}

void Fsm::Reset()
{
    p_current = &state[1];
}

void Fsm::Advance(char c)
{
    if (p_current ！= NULL)
        p_current = p_current->transition[c];
}

int Fsm::EndState()
{
    return p_current == &state[0];
}

int Fsm::DoomState()
{
    return p_current == NULL;
}