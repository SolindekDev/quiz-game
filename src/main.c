#include <main.h>
#include <utils.h>
#include <terminal.h>
#include <draw.h>

void win() {
	clear_screen();

	set_cursor_position(32/2-8, (150/2)-(79/2));
	printf("\x1b[0;35m\YYY      YYY   YYYYYYYY   YYYY    YYYY      YYY      YYY YYYYYYYY  YYYY    YYYY");
	set_cursor_position(32/2-7, (150/2)-(79/2));
	printf("\x1b[0;35m\ YYY    YYY   YYYYYYYYYY  YYYY    YYYY      YYY  YY  YYY YYYYYYYY  YYYYY   YYYY");
	set_cursor_position(32/2-6, (150/2)-(79/2));
	printf("\x1b[0;35m\  YYY  YYY   YYYY    YYYY YYYY    YYYY      YYY  YY  YYY   YYYY    YYYYYY  YYYY");
	set_cursor_position(32/2-5, (150/2)-(79/2));
	printf("\x1b[0;35m\   YYYYYY    YYY      YYY YYYY    YYYY      YYY  YY  YYY   YYYY    YYYYYYYYYYYY");
	set_cursor_position(32/2-4, (150/2)-(79/2));
	printf("\x1b[0;35m\    YYYY     YYY      YYY YYYY    YYYY      YYY  YY  YYY   YYYY    YYYYYYYYYYYY");
	set_cursor_position(32/2-3, (150/2)-(79/2));
	printf("\x1b[0;35m\    YYyY     YYYY    YYYY YYYYYYYYYYYY      YYYYYYYYYYYY   YYYY    YYYY  YYYYYY");
	set_cursor_position(32/2-2, (150/2)-(79/2));
	printf("\x1b[0;35m\    YYyY      YYYYYYYYYY  YYYYYYYYYYYY       YYYYYYYYYY  YYYYYYYY  YYYY   YYYYY");
	set_cursor_position(32/2-1, (150/2)-(79/2));
	printf("\x1b[0;35m\    YYYY       YYYYYYYY    YYYYYYYYYY         YYYYYYYY   YYYYYYYY  YYYY    YYYY");                                                                       
	printf("\x1b[0;35m");

	set_cursor_position(32/2+1, (150/2)-(strlen("Thanks for playing!")/2));
	printf("\x1b[0;33mThanks for playing!\x1b[0;0m");

	set_cursor_position(32/2+2, (150/2)-(strlen("Source code: https://github.com/solindekdev/quiz-game")/2));
	printf("\x1b[0;33mSource code: https://github.com/solindekdev/quiz-game\x1b[0;0m");

	set_cursor_position(32/2+5, (150/2)-(strlen("Click Ctrl+C to exit")/2));
	printf("\x1b[0;33mClick Ctrl+C to exit\x1b[0;0m");

    set_cursor_position(32, 150);

    while(1)
	    getchar();
}

void wrong_answer() {
	clear_screen();

	set_cursor_position(32/2-8, 0);

	printf("\x1b[0;35m\
  YYY      YYY YYYYYYYYYYY    YYYYYYYY   YYYY    YYYY YYYYYYYYYYYY         YYYYYY    YYYY    YYYY YYYYYYYYYYYY YYY      YYY YYYYYYYYYYYY YYYYYYYYYYY\n\
  YYY  YY  YYY YYYYYYYYYYY   YYYYYYYYYY  YYYYY   YYYY YYYYYYYYYYYY        YYYYYYYY   YYYYY   YYYY YYYYYYYYYYYY YYY  YY  YYY YYYYYYYYYYYY YYYYYYYYYYY\n\
  YYY  YY  YYY YYYY    YYY  YYYY    YYYY YYYYYY  YYYY YYYY               YYYYYYYYYY  YYYYYY  YYYY YYYY         YYY  YY  YYY YYYY         YYYY    YYY\n\  
  YYY  YY  YYY YYYYYYYYY    YYY      YYY YYYYYYYYYYYY YYYY  YYYYYY      YYYY    YYYY YYYYYYYYYYYY YYYYYYYYYYYY YYY  YY  YYY YYYYYYYYYYYY YYYYYYYYY\n\    
  YYY  YY  YYY YYYYYYYYY    YYY      YYY YYYYYYYYYYYY YYYY  YYYYYY      YYYYYYYYYYYY YYYYYYYYYYYY YYYYYYYYYYYY YYY  YY  YYY YYYYYYYYYYYY YYYYYYYYY\n\    
  YYYYYYYYYYYY YYYY  YYYY   YYYY    YYYY YYYY  YYYYYY YYYY    YYYY      YYYYYYYYYYYY YYYY  YYYYYY        YYYYY YYYYYYYYYYYY YYYY         YYYY  YYYY\n\   
   YYYYYYYYYY  YYYY   YYYY   YYYYYYYYYY  YYYY   YYYYY YYYYYYYYYYYY      YYYY    YYYY YYYY   YYYYY YYYYYYYYYYYY  YYYYYYYYYY  YYYYYYYYYYYY YYYY   YYYY\n\  
    YYYYYYYY   YYYY    YYYY   YYYYYYYY   YYYY    YYYY YYYYYYYYYYYY      YYYY    YYYY YYYY    YYYY YYYYYYYYYYYY   YYYYYYYY   YYYYYYYYYYYY YYYY    YYYY\n\ 
\x1b[0;0m");

	set_cursor_position(32/2+5, (150/2)-(strlen("Click Ctrl+C to exit")/2));
	printf("\x1b[0;33mClick Ctrl+C to exit\x1b[0;0m");

    set_cursor_position(32, 150);

    while(1)
	    getchar();
}

void error(char* err) {
	/* Draw the box of error */
	draw_box(32/2+10, (150/2)-(30/2), 2, 30);
	/* --------------------- */

	/* Draw the error title */
	set_cursor_position(32/2+11, (150/2)-(strlen(err)/2));
	printf("\x1b[0;31m%s\x1b[0;0m ", err); 
	/* -------------------- */
}

int main(int argc, char** argv) {
	/* Initialize screen */
	clear_screen(); 
	set_terminal_size(32, 150);
	/* ------------ */

	win();

	question1();
	question2();
	question3();
	question4();
	question5();


	return 0;
}