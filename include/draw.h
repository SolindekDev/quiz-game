#ifndef TERMINAL_H

#define TERMINAL_H

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

void draw_box(int row, int col, int height, int width);
void print_center(char* str, int row);

#endif // TERMINAL_H