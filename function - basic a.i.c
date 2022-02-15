#include <stdio.h>

int name[50];
int input;


int main()
{
    printf(" 4-CPL:Hi there!\n 4-CPL:My name is 4-CPL and I will try to brighten your day!\n 4-CPL:But first tell me your name please!\nMy name is:");

    scanf("%s",&name);

    printf("4-CPL:Pleased to meet you %s, you have a great name!\n",name);

    printf("If I might, I want to ask you how is your day going?\n Good of Bad?\n");


    return 0;
}

void cases()
{
    switch(input)
    {
    case 1:
        printf("Sorry to hear that %s, I really hope your day gets better!");
        break;
    case 2:
        printf("That's just great %s, keep on doing just that!");
        break;
    }
}
