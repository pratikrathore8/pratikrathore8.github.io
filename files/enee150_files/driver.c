#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "move.h"
#include "main.h"

int main() {
    //The board contains a jumping opportunity for WHITE
    the_board[4][3] = RED;

    int jump_opp = jump_exists(WHITE);

    if(jump_opp == TRUE) {
        printf("PASSED");
    }
    else {
        printf("FAILED");
    }
}