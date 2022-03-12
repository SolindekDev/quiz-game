#include <questions.h>

void question1() {
		/* Draw the box */
	draw_box(32/2-7, (150/2)-(60/2), 13, 60);
	/* ------------ */

	/* Set title of quiz */
	set_cursor_position(32/2-5, (150/2)-(6/2));
	printf("\x1b[1;33mQuiz 1\x1b[0;0m"); 
	/* ------------ */

	/* Questions */
	set_cursor_position(32/2-3, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mQ:\x1b[0;0m What's the Linux Kernel author?"); 
	/* ------------ */

	/* Answer */
	set_cursor_position(32/2-1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m1:\x1b[0;0m Andrew Santi"); 
	set_cursor_position(32/2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m2:\x1b[0;0m Linus Smith"); 
	set_cursor_position(32/2+1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m3:\x1b[0;0m Linus Torvalds"); 
	set_cursor_position(32/2+2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m4:\x1b[0;0m George Taylor");
	/* ------------ */

	/* Answer of the user */
	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	/* ------------ */

	/* Answer loop */
	bool ans = false;

	while (ans != true) {
		/* Get the answer from the user */
	    int answer; 
	    scanf("%d", &answer);

	    if (answer > 4) {
	    	error("The number is too big");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else if (answer < 1) {
			error("The number is too small");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
			printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else {
	    	switch (answer) {
	    		case 1:
	    			wrong_answer();
	    			break;
	    		case 2:
	    			wrong_answer();
	    			break;
	    		case 3:
	    			return;
	    			break;
	    		case 4:
	    			wrong_answer();
	    			break;
	    	}
	    	ans = true;
	    }
	    /* ------------ */
	}
	/* ------------ */
}


void question2() {
	/* Draw the box */
	draw_box(32/2-7, (150/2)-(60/2), 13, 60);
	/* ------------ */

	/* Set title of quiz */
	set_cursor_position(32/2-5, (150/2)-(6/2));
	printf("\x1b[1;33mQuiz 2\x1b[0;0m"); 
	/* ------------ */

	/* Questions */
	set_cursor_position(32/2-3, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mQ:\x1b[0;0m Julia is..."); 
	/* ------------ */

	/* Answer */
	set_cursor_position(32/2-1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m1:\x1b[0;0m Linux Distro"); 
	set_cursor_position(32/2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m2:\x1b[0;0m Programming Language"); 
	set_cursor_position(32/2+1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m3:\x1b[0;0m Package Manager"); 
	set_cursor_position(32/2+2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m4:\x1b[0;0m Game");
	/* ------------ */

	/* Answer of the user */
	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	/* ------------ */

	/* Answer loop */
	bool ans = false;

	while (ans != true) {
		/* Get the answer from the user */
	    int answer; 
	    scanf("%d", &answer);

	    if (answer > 4) {
	    	error("The number is too big");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else if (answer < 1) {
			error("The number is too small");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
			printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else {
	    	switch (answer) {
	    		case 1:
	    			wrong_answer();
	    			break;
	    		case 2:
	    			return;
	    			break;
	    		case 3:
	    			wrong_answer();
	    			break;
	    		case 4:
	    			wrong_answer();
	    			break;
	    	}
	    	ans = true;
	    }
	    /* ------------ */
	}
	/* ------------ */
}

void question3() {
	/* Draw the box */
	draw_box(32/2-7, (150/2)-(60/2), 13, 60);
	/* ------------ */

	/* Set title of quiz */
	set_cursor_position(32/2-5, (150/2)-(6/2));
	printf("\x1b[1;33mQuiz 3\x1b[0;0m"); 
	/* ------------ */

	/* Questions */
	set_cursor_position(32/2-3, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mQ:\x1b[0;0m What is a compiler..."); 
	/* ------------ */

	/* Answer */
	set_cursor_position(32/2-1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m1:\x1b[0;0m Compiler is a computer program that "); 
	set_cursor_position(32/2, (150/2)-(60/2)+2); 
	printf("   translates code into another language");
	set_cursor_position(32/2+1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m2:\x1b[0;0m Compiler is a type of game"); 
	set_cursor_position(32/2+2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m3:\x1b[0;0m Compiler is a computer element"); 
	set_cursor_position(32/2+3, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m4:\x1b[0;0m Compiler is a programming language");
	/* ------------ */

	/* Answer of the user */
	set_cursor_position(32/2+5, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	/* ------------ */

	/* Answer loop */
	bool ans = false;

	while (ans != true) {
		/* Get the answer from the user */
	    int answer; 
	    scanf("%d", &answer);

	    if (answer > 4) {
	    	error("The number is too big");
	    	set_cursor_position(32/2+5, (150/2)-(60/2)+2); 
	    	printf("                                        ");
	    	set_cursor_position(32/2+5, (150/2)-(60/2)+2); 
	    	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else if (answer < 1) {
			error("The number is too small");
			set_cursor_position(32/2+5, (150/2)-(60/2)+2); 
	    	printf("                                        ");
			set_cursor_position(32/2+5, (150/2)-(60/2)+2); 
			printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else {
	    	switch (answer) {
	    		case 1:
	    			return;
	    			break;
	    		case 2:
	    			wrong_answer();
	    			break;
	    		case 3:
	    			wrong_answer();
	    			break;
	    		case 4:
	    			wrong_answer();
	    			break;
	    	}
	    	ans = true;
	    }
	    /* ------------ */
	}
	/* ------------ */
}

void question4() {
	/* Draw the box */
	draw_box(32/2-7, (150/2)-(60/2), 13, 60);
	/* ------------ */

	/* Set title of quiz */
	set_cursor_position(32/2-5, (150/2)-(6/2));
	printf("\x1b[1;33mQuiz 4\x1b[0;0m"); 
	/* ------------ */

	/* Questions */
	set_cursor_position(32/2-3, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mQ:\x1b[0;0m What int type stores..."); 
	/* ------------ */

	/* Answer */
	set_cursor_position(32/2-1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m1:\x1b[0;0m Character"); 
	set_cursor_position(32/2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m2:\x1b[0;0m Array of any type"); 
	set_cursor_position(32/2+1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m3:\x1b[0;0m Array of Characters"); 
	set_cursor_position(32/2+2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m4:\x1b[0;0m Number");
	/* ------------ */

	/* Answer of the user */
	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	/* ------------ */

	/* Answer loop */
	bool ans = false;

	while (ans != true) {
		/* Get the answer from the user */
	    int answer; 
	    scanf("%d", &answer);

	    if (answer > 4) {
	    	error("The number is too big");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else if (answer < 1) {
			error("The number is too small");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
			printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else {
	    	switch (answer) {
	    		case 1:
	    			wrong_answer();
	    			break;
	    		case 2:
	    			wrong_answer();
	    			break;
	    		case 3:
	    			wrong_answer();
	    			break;
	    		case 4:
	    			return;
	    			break;
	    	}
	    	ans = true;
	    }
	    /* ------------ */
	}
	/* ------------ */
}

void question5() {
	/* Draw the box */
	draw_box(32/2-7, (150/2)-(60/2), 13, 60);
	/* ------------ */

	/* Set title of quiz */
	set_cursor_position(32/2-5, (150/2)-(6/2));
	printf("\x1b[1;33mQuiz 5\x1b[0;0m"); 
	/* ------------ */

	/* Questions */
	set_cursor_position(32/2-3, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mQ:\x1b[0;0m What ++ make..."); 
	/* ------------ */

	/* Answer */
	set_cursor_position(32/2-1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m1:\x1b[0;0m Decrement"); 
	set_cursor_position(32/2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m2:\x1b[0;0m Increment"); 
	set_cursor_position(32/2+1, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m3:\x1b[0;0m Divide by 0"); 
	set_cursor_position(32/2+2, (150/2)-(60/2)+2); 
	printf("\x1b[1;35m4:\x1b[0;0m Increment by 10");
	/* ------------ */

	/* Answer of the user */
	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	/* ------------ */

	/* Answer loop */
	bool ans = false;

	while (ans != true) {
		/* Get the answer from the user */
	    int answer; 
	    scanf("%d", &answer);

	    if (answer > 4) {
	    	error("The number is too big");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
	    	set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else if (answer < 1) {
			error("The number is too small");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
	    	printf("                                        ");
			set_cursor_position(32/2+4, (150/2)-(60/2)+2); 
			printf("\x1b[1;35mA:\x1b[0;0m You're answer: ");
	    } else {
	    	switch (answer) {
	    		case 1:
	    			wrong_answer();
	    			break;
	    		case 2:
	    			return;
	    			break;
	    		case 3:
	    			wrong_answer();
	    			break;
	    		case 4:
	    			wrong_answer();
	    			break;
	    	}
	    	ans = true;
	    }
	    /* ------------ */
	}
	/* ------------ */
}