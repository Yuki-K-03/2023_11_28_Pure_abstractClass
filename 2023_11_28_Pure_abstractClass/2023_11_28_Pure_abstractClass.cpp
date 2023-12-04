#include <iostream>
#include "Goblin.h"
#include "Slime.h"
#include "Ogre.h"
using namespace std;

int main()
{
    Goblin gobA;
    Goblin gobB;
    Slime slime;
    Ogre ogre;

    /*gobA.play(gobB);
    slime.play(gobA);*/
    int turn = 0;

    do {
        printf("=====%2dターン目=====\n", ++turn);
    } while (ogre.play(gobA) && gobA.play(ogre));
}
