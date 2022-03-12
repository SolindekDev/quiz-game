#ifndef MAIN_H

#define MAIN_H

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <termios.h>   

void error(char* err);
void good_answer();
void wrong_answer();
int main(int argc, char** argv);

#endif // MAIN_H