/*
 * Authors:
 * + Andrea Fioraldi <andreafioraldi@gmail.com>
 * + Pietro Borrello <pietro.borrello95@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char shell[] = "/bin/sh";

void topo()
{
    asm("pop %eax");
}

void macellaio()
{
    asm("mov %eax, %ecx");
}

void fuoco()
{
    asm("pop %edi");
}

void acqua()
{
    asm("pop %esi");
}

void gatto()
{
    asm("pop %ebx");
}

void cane()
{
    asm("pop %edx");
}

void toro()
{
    asm("pop %eax");
    asm("pop %ecx");
}

void angelo_della_morte()
{
    asm("int $0x80");
}

void bastone()
{
    asm("pop %ecx");
}


int main()
{
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stdout, 0, 2, 0);
    
    char soldi[4];
    printf("Figliolo, di quanti soldi hai bisogno?\n");
    read(STDIN_FILENO, soldi, soldi);

    if(!strncmp(soldi, "due", 4)) {
        printf("Ora ti compro un topolino\n");
        return 0;
    }
    else {
        printf("Ne vuoi troppi, dovevo farti adottare\n");
        exit(1);
    }
}
