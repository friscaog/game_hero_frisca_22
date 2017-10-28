#include <stdio.h>
#include <stdlib.h>

struct data
{
    int pow;
    int att;
    int def;
};

int main()
{
    int saya, lawan;
    struct data player[100];
    player[0].pow=100;player[0].att=50;player[0].def=28;
    player[1].pow=100;player[1].att=40;player[1].def=45;
    player[2].pow=100;player[2].att=60;player[2].def=48;
    player[3].pow=100;player[3].att=50;player[3].def=29;
    player[4].pow=100;player[4].att=30;player[4].def=56;

    printf("\t|Player\t\t1\t2\t3\t4\t5   |\n");
    printf("\t|Power\t\t%d\t%d\t%d\t%d\t%d |\n", player[0].pow, player[1].pow, player[2].pow, player[3].pow, player[4].pow);
    printf("\t|Attack\t\t%d\t%d\t%d\t%d\t%d  |\n",player[0].att, player[1].att,player[2].att, player[3].att, player[4].att);
    printf("\t|Defense\t%d\t%d\t%d\t%d\t%d  |\n",player[0].def, player[1].def,player[2].def, player[3].def, player[4].def);

    printf("\nPilih Pemain (1/2/3/4/5)\n");
    printf("Saya: "); scanf("%d",&saya);
    printf("Lawan: "); scanf("%d",&lawan);

    saya=saya-1;
    lawan=lawan-1;

    //printf("power: player %d, power %d, attack %d, defense %d", saya+1, player[saya].pow, player[saya].att,player[saya].def);
    while(player[saya].pow > 0 && player[lawan].pow > 0)
    {
        system("cls");
        int actl, acts, mins;

        printf("\t|Pemain\t\tSaya\tLawan\t|\n");
        printf("\t|Power\t\t%d\t%d\t|\n", player[saya].pow, player[lawan].pow);
        printf("\t|Attack\t\t%d\t%d\t|\n",player[saya].att, player[lawan].att);
        printf("\t|Defense\t%d\t%d\t|\n",player[saya].def, player[lawan].def);

        printf("\nChoose your action: 1)Attack  2)Defend\n");
        printf("Saya: "); scanf("%d",&acts); player[saya].pow=player[saya].pow - 10;
        printf("Lawan: ");scanf("%d", &actl); player[lawan].pow=player[lawan].pow - 10;

        if(acts==1 && actl==1)
        {
            if(player[saya].att > player[lawan].def)
            {
                mins= player[saya].att - player[lawan].def;
                player[lawan].pow = player[lawan].pow - mins;
            }

            if(player[saya].def < player[lawan].att)
            {
                mins= player[lawan].att - player[saya].def;
                player[saya].pow = player[saya].pow - mins;
            }
        }

        if(acts==1 && actl==2)
        {
            if(player[saya].att > player[lawan].def)
            {
                mins= player[saya].att - player[lawan].def;
                player[lawan].pow = player[lawan].pow - mins;
            }
        }

        if(acts==2 && actl ==1)
        {
            if(player[saya].def < player[lawan].att)
            {
                mins= player[lawan].att - player[saya].def;
                player[saya].pow = player[saya].pow - mins;
            }
        }

    }

    system("cls");
    printf("\t|Pemain\t\tSaya\tLawan\t|\n");
    printf("\t|Power\t\t%d\t%d\t|\n", player[saya].pow, player[lawan].pow);
    printf("\t|Attack\t\t%d\t%d\t|\n",player[saya].att, player[lawan].att);
    printf("\t|Defense\t%d\t%d\t|\n",player[saya].def, player[lawan].def);
    if(player[saya].pow <= 0)
        printf("Pemain Saya Kalah!!!\n");
    else
        printf("Pemain Lawan Kalah!!!\n");
    printf("Permainan Selesai\n\n");

    return 0;
}
