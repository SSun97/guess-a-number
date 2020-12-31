
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu() {

	printf("*****************************************\n");
	printf("*****    1 . Play    0 . Exit    ********\n");
	printf("*****************************************\n");
	

}

//RAND_MAX 0-32767
void game(){
	int ret = 0;
	int guess = 0;
	//srand((unsigned int) time(NULL));
	ret = rand()%100+1;

	while (1)
	{
		printf("Guess a number:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("Too big!");
		}
		else if (guess < ret){

			printf("Too small!");
		}
		else {
			printf("You are correct! the number is %d\n", ret);
			break;
		}

	}




	//printf("%d\n",ret);
}




int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please choose : \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("Exit Game\n");
				break;

		default:
			printf("Choose Wrong\n");
			break;
		}
	} while (input);










}