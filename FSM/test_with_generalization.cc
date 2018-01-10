#include "fsm_with_generalization.h"

#include "stdio.h"  // printf, scanf
#include "stdlib.h" // system

void test_fsm()
{
    char input_string[80];
    printf("Enter input expression: ");
    scanf("%s", input_string);

    TransGraph graph[] =
    {
        {1, 'A', 2}, {1, 'B', 3}, {1, 'C', 4}, {1, 'D', 5},
        {2, 'E', 2}, {2, 'I', 0},
        {3, 'F', 3}, {3, 'J', 0}, {3, 'M', 4},
        {4, 'G', 4}, {4, 'K', 0},
        {5, 'H', 5}, {5, 'L', 0}, {5, 'O', 2}, {5, 'N', 4},
        {0, 0, 0}
    };

    Fsm fsm(graph);
    fsm.Reset();
    int index = 0;
    fsm.Advance(input_string[index++]);

    while (!fsm.EndState() && !fsm.DoomState())
        fsm.Advance(input_string[index++]);

    if (fsm.EndState())
        printf("\nValid input expression");
    else
        printf("\nInvalid input expression");
}


int main()
{
    test_fsm();

    system("pause");
}