#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void bot_response_stone(char *BOT_response[3], int random, int roun, char player_name[21], char player_response[8], int *point_player_score, int *point_bot_score)
{

    if (*(BOT_response[random] + 1) == 'T' && player_response[1] == 'A')
    {
        *point_player_score += 1;
        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[random] + 1) == 'T' && player_response[1] == 'T')
    {
        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[random] + 1) == 'T' && player_response[1] == 'C')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[random] + 1) == 'A' && player_response[1] == 'T')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[random] + 1) == 'A' && player_response[1] == 'A')
    {

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[random] + 1) == 'A' && player_response[1] == 'C')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[random] + 1) == 'C' && player_response[1] == 'C')
    {

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[random] + 1) == 'C' && player_response[1] == 'A')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[random] + 1) == 'C' && player_response[1] == 'T')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
}

void bot_response_paper(char *BOT_response[3], int rando, int roun, char player_name[21], char player_response[8], int *point_player_score, int *point_bot_score)
{

    if (*(BOT_response[rando] + 1) == 'A' && player_response[1] == 'T')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[rando] + 1) == 'A' && player_response[1] == 'A')
    {

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[rando] + 1) == 'A' && player_response[1] == 'C')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[rando] + 1) == 'C' && player_response[1] == 'C')
    {

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[rando] + 1) == 'C' && player_response[1] == 'A')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[rando] + 1) == 'C' && player_response[1] == 'T')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[rando] + 1) == 'T' && player_response[1] == 'A')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[rando] + 1) == 'T' && player_response[1] == 'T')
    {
        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[rando] + 1) == 'T' && player_response[1] == 'C')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
}

void bot_response_scissor(char *BOT_response[3], int ran, int roun, char player_name[21], char player_response[8], int *point_player_score, int *point_bot_score)
{

    if (*(BOT_response[ran] + 1) == 'C' && player_response[1] == 'C')
    {
        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[ran] + 1) == 'C' && player_response[1] == 'A')
    {
        *point_bot_score += 1;
        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[ran] + 1) == 'C' && player_response[1] == 'T')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }

    else if (*(BOT_response[ran] + 1) == 'A' && player_response[1] == 'T')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
    else if (*(BOT_response[ran] + 1) == 'A' && player_response[1] == 'A')
    {

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[ran] + 1) == 'A' && player_response[1] == 'C')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[ran] + 1) == 'T' && player_response[1] == 'A')
    {
        *point_player_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("%s WON\n", player_name);
        printf("BOT LOST\n");
    }
    else if (*(BOT_response[ran] + 1) == 'T' && player_response[1] == 'T')
    {
        printf("ROUND %d RESULTS:\n", roun);
        printf("BOTH EQUAL!!!\n");
    }
    else if (*(BOT_response[ran] + 1) == 'T' && player_response[1] == 'C')
    {
        *point_bot_score += 1;

        printf("ROUND %d RESULTS:\n", roun);
        printf("BOT WON\n");
        printf("%s LOST\n", player_name);
    }
}

int main()
{
    srand(time(NULL));
    int random = rand() % 3;
    srand(time(NULL));
    int rando = (1 + rand() % 2);
    srand(time(NULL));
    int ran = rand() % 2;

    printf("****************************************************************************************************************************************************\n");
    printf("                                                  HEY! Welcome to STONE,PAPER and SCISSOR Game\n");
    printf("****************************************************************************************************************************************************\n");

    printf("\n\nWhat's YOUR Name (The name You entered will be used in this Game)::\n");
    char player_name[21];
    gets(player_name);

    printf("\n\n%s, How Many Rounds You want To Play!\n", player_name);
    int num_of_rounds;
    scanf("%d", &num_of_rounds);

    printf("\nAll the Best %s,You Are Playing Against The COMPUTER BOT!", player_name);

    int player_score = 0;
    int *ps = &player_score;
    int BOT_score = 0;
    int *bs = &BOT_score;

    printf("\n\n\t\t\t\t\t###### SCORES:%s = %d, BOT = %d ######", player_name, player_score, BOT_score);

    int rounds = 1;
    while (num_of_rounds >= rounds)
    {
        char player_response[8];
        char *BOT_response[3] = {"STONE", "PAPER", "SCISSOR"};
        printf("\n\nSELECT STONE or PAPER or SCISSOR (All Letters should be in Capital): \n");
        scanf("%s", player_response);

        if (rounds % 3 == 1)
        {
            printf("\t\t------------------------- BOT Selected: %s and %s Selected: %s ------------------------\n\n", BOT_response[random], player_name, player_response);
            bot_response_stone(BOT_response, random, rounds, player_name, player_response, ps, bs);
        }
        else if (rounds % 3 == 2)
        {
            printf("\t\t------------------------- BOT Selected: %s and %s Selected: %s ------------------------\n\n", BOT_response[rando], player_name, player_response);
            bot_response_paper(BOT_response, rando, rounds, player_name, player_response, ps, bs);
        }
        else if (rounds % 3 == 0)
        {
            printf("\t\t------------------------- BOT Selected: %s and %s Selected: %s ------------------------\n\n", BOT_response[ran], player_name, player_response);
            bot_response_scissor(BOT_response, ran, rounds, player_name, player_response, ps, bs);
        }

        printf("\t\t\t\t\t\tROUND %d SCORES BOARD::\n", rounds);
        printf("\t\t\t\t\t###### SCORES:%s = %d, BOT = %d ######\n", player_name, player_score, BOT_score);

        rounds++;
    }

    printf("\n\n\nALL ROUNDS COMPLETED\n");
    printf("\t\t\t\t\t\tFINAL SCORES BOARD:::\n");
    printf("\t\t\t\t\t###### SCORES:%s = %d, BOT = %d ######\n", player_name, player_score, BOT_score);
    if (player_score > BOT_score)
    {
        printf("\nCONGRATULATIONS %s,You WON AGAINST COMPUTER BOT!! Hurray!!\n", player_name);
    }
    else if (BOT_score > player_score)
    {
        printf("\nSORRRY %s,You LOST AGAINST COMPUTER BOT!! BETTER LUCK NEXT TIME,OOPS!!\n", player_name);
    }
    else
    {
        printf("\n%s SCORE and BOT SCORE,BOTH ARE EQUAL,ANYWAY %s YOU GAVE TOUGH COMPETITION FOR BOT!!\n", player_name, player_name);
    }
    printf("\n\n\n****************************************************************************************************************************************************\n");
    printf("                                                    THANK YOU! HAVE A GREAT DAY :)\n");
    printf("****************************************************************************************************************************************************\n");
    return 0;
}