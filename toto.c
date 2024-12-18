#include <stdio.h>
#include <stdlib.h>

int addAge(int jojo);

int main(int ac, char **av) {
    (void)ac;
    int age = atoi(av[1]);

    if (age >= 18)
    {
        printf("Vous etes majeur et vous avez %d ans\n", age);
        if (age > 100)
            printf("Vous etes surement mort");
    }
    else if (age < 18)
    {
        printf("Vous etes mineur et vous avez %d ans\n", age);
        if (age < 0)
            printf("Vous etes pas nee...");
    }
    return (0);
}

int addAge(int jojo)
{
    jojo += 1;
    return (jojo);
}

// BASE

// boucle
// fonction

// AVANCE

// pointeurs
// tableaux
// liste chainee
// struct
// malloc

// AUTRE

// compiler
// preprocesseur