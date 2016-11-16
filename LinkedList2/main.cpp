#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>

using namespace std;

typedef struct mahasiswa {
    int id;
    char nama[20];
    struct mahasiswa *prev;
    struct mahasiswa *next;
} MHS, *MHSPTR;

int main()
{
    MHSPTR mhs = (MHSPTR) malloc(sizeof(MHS));
    mhs->id = 0;
    mhs->next = (MHSPTR) malloc(sizeof(MHS));
    mhs->prev = (MHSPTR) malloc(sizeof(MHS));
    mhs->prev->id = 2;
    mhs->next->id = 1;

    cout <<  mhs->next->id << endl;
    cout <<  mhs->prev->id << endl;


    return 0;
}
