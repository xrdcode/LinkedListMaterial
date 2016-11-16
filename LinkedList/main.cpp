#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

typedef struct nod {
    int data;
    struct nod *next;
} NOD, *NODPTR;

typedef struct mahasiswa {
    int id;
    char[20] nama;
    struct mahasiswa *next;
}

void CreateList(NODPTR *s) {
    *s = NULL;
}

NODPTR NewNode(int m) {
    NODPTR n;
    n = (NODPTR) malloc(sizeof(NOD));
    if(n != NULL) {
        n->data = m;
        n->next = NULL;
    }
    return n;
}

void InserList(NODPTR *s, NODPTR t, NODPTR p) {
    if(p == NULL) {
        t->next = *s;
        *s = t;
    } else {
        t->next = p->next;
        p->next = t;
    }
}

void PrintList(NODPTR s) {
    NODPTR ps;
    for(ps = s; ps != NULL; ps = ps->next) {
        printf("%d --> ", ps->data);
    }
    printf("NULL\n");
}

int main()
{
    NODPTR pel;
    NODPTR n;

    int i, k, nilai;
    CreateList(&pel);
    printf("Masukkan banyak data = ");
    scanf("%d", &k);
    for(i = 1; i <= k; i++) {
        printf("Masukkan data list ke-%d  = ", i);
        scanf("%d", &nilai);
        n = NewNode(nilai);
        InserList(&pel, n, NULL);
    }
    PrintList(pel);
    return 0;
}
