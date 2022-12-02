#include "PScore.h"
#include "List.h"
#include "ListIterator.h"

void print(List *list) {
    printf("List(%d):\n", getSize(list));
    int i=1;
    ListIterator *it=makeListIterator(list);
    while(hasNext(it)) {
        PD *pd((PD*)next(it));
        printf("%d:", i);
        print(pd);
        printf(" - ");
        i++;
    }
    printf("\n");
}

int main(void) {
    printf("asdfasdf");
    
    List *list=makeList();

    int score1[4] = {81, 74, 96, 85};
    PD *pd1=makePD("Adele", score1);
    int score2[4] = {60, 82, 62, 84};
    PD *pd2=makePD("Andy", score2);
    int score3[4] = {83, 70, 63, 69};
    PD *pd3=makePD("Boniface", score3);
    int score4[4] = {74, 70, 72, 60};
    PD *pd4=makePD("Cecil", score4);
    int score5[4] = {84, 85, 82, 75};
    PD *pd5=makePD("Clifton", score5);
    int score6[4] = {60, 88, 89, 97};
    PD *pd6=makePD("Conrad", score6);
    int score7[4] = {60, 66, 76, 83};
    PD *pd7=makePD("Duke", score7);
    int score8[4] = {77, 80, 75, 70};
    PD *pd8=makePD("Ernest", score8);
    int score9[4] = {82, 90, 71, 84};
    PD *pd9=makePD("Ewan", score9);
    int score10[4] = {82, 62, 84, 72};
    PD *pd10=makePD("Guinnens", score10);
    int score11[4] = {98, 78, 77, 60};
    PD *pd11=makePD("LeRoy", score11);
    int score12[4] = {78, 89, 87, 69};
    PD *pd12=makePD("Lew", score12);
    int score13[4] = {79, 80, 91, 67};
    PD *pd13=makePD("Luke", score13);
    int score14[4] = {89, 63, 65, 65};
    PD *pd14=makePD("Marcus", score14);
    int score15[4] = {71, 79, 61, 65};
    PD *pd15=makePD("Nicholas", score15);
    int score16[4] = {60, 64, 99, 96};
    PD *pd16=makePD("Percival", score16);
    int score17[4] = {77, 84, 80, 78};
    PD *pd17=makePD("Rex", score17);
    int score18[4] = {76, 94, 98, 92};
    PD *pd18=makePD("Robert", score18);
    int score19[4] = {67, 62, 60, 87};
    PD *pd19=makePD("Stephan", score19);
    int score20[4] = {74, 73, 79, 67};
    PD *pd20=makePD("Tecwen", score20);
    
    add(list, pd1);
    add(list, pd2);
    add(list, pd3);
    add(list, pd4);
    add(list, pd5);
    add(list, pd6);
    add(list, pd7);
    add(list, pd8);
    add(list, pd9);
    add(list, pd10);
    add(list, pd11);
    add(list, pd12);
    add(list, pd13);
    add(list, pd14);
    add(list, pd15);
    add(list, pd16);
    add(list, pd17);
    add(list, pd18);
    add(list, pd19);
    add(list, pd20);
    
    printf("*** Before ***\n");
    print(list);

    remove(list, pd2);

    printf("*** After ***\n");
    print(list);

    PD *pd=(PD*)get(list, 2);
    printf("3番目は"); print(pd);
}