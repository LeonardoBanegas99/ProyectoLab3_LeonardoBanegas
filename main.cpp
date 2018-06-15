#include <ncurses.h>
#include <iostream>
#include "Enemigo.h"
using namespace std;

void imprimir(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
              int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
              int, int, int, int, int, int, int, int, int);

void borrar(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
            int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int,
            int, int, int, int, int, int, int, int, int);

int main()
{
    int x1 = 70, x2 = 80, x3 = 71, x4 = 72, x5 = 73, x6 = 74, x7 = 75, x8 = 76, x9 = 77, x10 = 78,
        x11 = 79, x12 = 79, x13 = 71, x14 = 78, x15 = 72, x16 = 77, x17 = 73, x18 = 76, x19 = 74, x20 = 75,
        x21 = 78, x22 = 72, x23 = 77, x24 = 73, x25 = 74, x26 = 76, x27 = 75, x28 = 73, x29 = 77, x30 = 74,
        x31 = 76, x32 = 75, x33 = 74, x34 = 75, x35 = 76, x36 = 75, x37 = 70, x38 = 80, x39 = 70, x40 = 80,
        x41 = 72, x42 = 78, x43 = 72, x44 = 78, x45 = 75;

    bool seguir = true;
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_RED);
    init_pair(2, COLOR_WHITE, COLOR_WHITE);
    init_pair(3, COLOR_CYAN, COLOR_CYAN);
    init_pair(4, COLOR_BLACK, COLOR_BLACK);

    /*move(40,154);
    attron(COLOR_PAIR(1));
    printw(" ");*/

    imprimir(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20,
             x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40,
             x41, x42, x43, x44, x45);

    while (seguir)
    {
        refresh();
        char tecla = getch();
        if (tecla == 'C')
        {
            if (x2 < 154)
            {

                borrar(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20,
                       x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40,
                       x41, x42, x43, x44, x45);
                x1++;
                x2++;
                x3++;
                x4++;
                x5++;
                x6++;
                x7++;
                x8++;
                x9++;
                x10++;
                x11++;
                x12++;
                x13++;
                x14++;
                x15++;
                x16++;
                x17++;
                x18++;
                x19++;
                x20++;
                x21++;
                x22++;
                x23++;
                x24++;
                x25++;
                x26++;
                x27++;
                x28++;
                x29++;
                x30++;
                x31++;
                x32++;
                x33++;
                x34++;
                x35++;
                x36++;
                x37++;
                x38++;
                x39++;
                x40++;
                x41++;
                x42++;
                x43++;
                x44++;
                x45++;

                imprimir(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20,
                         x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40,
                         x41, x42, x43, x44, x45);
            }
        }

        else if (tecla == 'D')
        {
            if (x1>1)
            {

                borrar(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20,
                       x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40,
                       x41, x42, x43, x44, x45);
                x1--;
                x2--;
                x3--;
                x4--;
                x5--;
                x6--;
                x7--;
                x8--;
                x9--;
                x10--;
                x11--;
                x12--;
                x13--;
                x14--;
                x15--;
                x16--;
                x17--;
                x18--;
                x19--;
                x20--;
                x21--;
                x22--;
                x23--;
                x24--;
                x25--;
                x26--;
                x27--;
                x28--;
                x29--;
                x30--;
                x31--;
                x32--;
                x33--;
                x34--;
                x35--;
                x36--;
                x37--;
                x38--;
                x39--;
                x40--;
                x41--;
                x42--;
                x43--;
                x44--;
                x45--;

                imprimir(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20,
                         x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40,
                         x41, x42, x43, x44, x45);
            }
        }

        refresh();
    }
    endwin();
}

void imprimir(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10, int x11,
              int x12, int x13, int x14, int x15, int x16, int x17, int x18, int x19, int x20,
              int x21, int x22, int x23, int x24, int x25, int x26, int x27, int x28, int x29, int x30,
              int x31, int x32, int x33, int x34, int x35, int x36, int x37, int x38, int x39, int x40,
              int x41, int x42, int x43, int x44, int x45)
{
    move(40, x1);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x2);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x3);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x4);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x5);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x6);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x7);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x8);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x9);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x10);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(40, x11);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(39, x12);
    attron(COLOR_PAIR(3));
    printw(" ");

    move(39, x13);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(38, x14);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(38, x15);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(37, x16);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(37, x17);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(36, x18);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(36, x19);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(35, x20);
    attron(COLOR_PAIR(3));
    printw(" ");

    move(39, x21);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(39, x22);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(38, x23);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(38, x24);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(37, x25);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(37, x26);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(36, x27);
    attron(COLOR_PAIR(3));
    printw(" ");
    move(39, x28);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(39, x29);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(39, x30);
    attron(COLOR_PAIR(2));
    printw(" ");

    move(39, x31);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(39, x32);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(38, x33);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(38, x34);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(38, x35);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(37, x36);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(39, x37);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(39, x38);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(38, x39);
    attron(COLOR_PAIR(1));
    printw(" ");
    move(38, x40);
    attron(COLOR_PAIR(1));
    printw(" ");

    move(37, x41);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(37, x42);
    attron(COLOR_PAIR(2));
    printw(" ");
    move(36, x43);
    attron(COLOR_PAIR(1));
    printw(" ");
    move(36, x44);
    attron(COLOR_PAIR(1));
    printw(" ");
    move(34, x45);
    attron(COLOR_PAIR(1));
    printw(" ");
    move(0, 0);
    attron(COLOR_PAIR(4));
}

void borrar(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10, int x11,
            int x12, int x13, int x14, int x15, int x16, int x17, int x18, int x19, int x20,
            int x21, int x22, int x23, int x24, int x25, int x26, int x27, int x28, int x29, int x30,
            int x31, int x32, int x33, int x34, int x35, int x36, int x37, int x38, int x39, int x40,
            int x41, int x42, int x43, int x44, int x45)
{
    move(40, x1);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x2);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x3);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x4);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x5);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x6);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x7);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x8);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x9);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x10);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(40, x11);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x12);
    attron(COLOR_PAIR(4));
    printw(" ");

    move(39, x13);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x14);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x15);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(37, x16);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(37, x17);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(36, x18);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(36, x19);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(35, x20);
    attron(COLOR_PAIR(4));
    printw(" ");

    move(39, x21);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x22);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x23);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x24);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(37, x25);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(37, x26);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(36, x27);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x28);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x29);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x30);
    attron(COLOR_PAIR(4));
    printw(" ");

    move(39, x31);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x32);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x33);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x34);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x35);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(37, x36);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x37);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(39, x38);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x39);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(38, x40);
    attron(COLOR_PAIR(4));
    printw(" ");

    move(37, x41);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(37, x42);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(36, x43);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(36, x44);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(34, x45);
    attron(COLOR_PAIR(4));
    printw(" ");
    move(0, 0);
    attron(COLOR_PAIR(4));
}