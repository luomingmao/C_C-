#include "fsm_with_passive_data.h"

#include "stdio.h"  // printf, scanf
#include "stdlib."  // system

void test_fsm()
{
    char input_string[80];
    printf("Enter input expression:");
    scanf("%s", input_string);

    Fsm fsm;
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