# 
#	MIT License
#
#	Copyright (c) 2022 SolindekDev
#
#	Permission is hereby granted, free of charge, to any person obtaining a copy
#	of this software and associated documentation files (the "Software"), to deal
#	in the Software without restriction, including without limitation the rights
#	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#	copies of the Software, and to permit persons to whom the Software is
#	furnished to do so, subject to the following conditions:
#
#	The above copyright notice and this permission notice shall be included in all
#	copies or substantial portions of the Software.
#
#	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
#	SOFTWARE.
#

all: c link run

run:
	./quiz
	clear

link:
	gcc bin/main.o bin/utils.o bin/terminal.o bin/draw.o bin/questions.o -o quiz

c:
	gcc -c -g src/main.c -o bin/main.o -I./include/
	gcc -c -g src/utils.c -o bin/utils.o -I./include/
	gcc -c -g src/terminal.c -o bin/terminal.o -I./include/
	gcc -c -g src/draw.c -o bin/draw.o -I./include/
	gcc -c -g src/questions.c -o bin/questions.o -I./include/