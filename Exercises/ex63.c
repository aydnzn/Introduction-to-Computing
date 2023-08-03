#include <stdio.h>

/*
Simulates a combat among gladiators. Each gladiator has health and attack stats. The code determines the champion gladiator by comparing the ratio of each gladiator's attack to every other gladiator's health. If one gladiator's ratio is higher than the other's for every other gladiator, they are declared the champion.
*/
struct Gladiator {
    int id;
    int health;
    int attack;
};

int main(void) {
    int N;
    scanf("%d", &N);
    
    struct Gladiator competitors[N];
    struct Gladiator champion = {0, 0, 0};
    
    // Read gladiators' health and attack
    for(int i = 0; i < N; i++) {
        scanf("%d %d", &competitors[i].health, &competitors[i].attack);
        competitors[i].id = 1000 + i;
    }

    int maxWins = -1;
    for(int i = 0; i < N; i++) {
        int wins = 0;
        for(int j = 0; j < N; j++) {
            if(i != j && 
                (float)competitors[i].attack / competitors[j].health > 
                (float)competitors[j].attack / competitors[i].health) {
                wins++;
            }
        }
        if(wins > maxWins) {
            maxWins = wins;
            champion = competitors[i];
        }
    }

    printf("ID: %d Health: %d Attack: %d\n", champion.id, champion.health, champion.attack);
    return 0;
}
