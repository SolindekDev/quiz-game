#ifndef TERMINAL_H

#define TERMINAL_H

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

int get_terminal_width();
int get_terminal_height();

void set_terminal_size(int row, int col);
void set_cursor_position(int row, int col);

#endif // TERMINAL_H