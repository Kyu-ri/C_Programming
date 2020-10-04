#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	RUNTIME	10
#define	MAX_BONUS 5
#define	HIT_SCORE 10

void printOX(int nValue);

void main(void){

	long inputTime;
	int nInput, nResult;
	int nTotalScore = 0;
	int nBonus = 0;

	srand((unsigned int)time(NULL));

	while (1){
		printf(">> O이면 0, X면 1을 입력하세요 : ");
		scanf_s("%d", &nInput, sizeof(int));
		inputTime = clock();
		if (nInput == 0 || nInput == 1){
			if ((inputTime / CLOCKS_PER_SEC) < RUNTIME){
				if (nInput == rand()%2) {
					printOX(0);
					if (nBonus < MAX_BONUS) nBonus++;
					nTotalScore += HIT_SCORE * nBonus;
					printf("[정답] Bonus : %dx,Total Score : %d\n", nBonus, nTotalScore);
				}
				else {
					printOX(1);
					nBonus = 0;
				}
			}
			else{
				nResult = nTotalScore;
				break;
			}
		}
	}
	printf("\n\nTotal Score : %d\n", nResult);
}

void printOX(int nValue) {
	if (nValue == 0) {
		printf("      00000000\n");
		printf("    0000000000000\n");
		printf("  000000     000000\n");
		printf(" 000000       000000\n");
		printf("000000         000000\n");
		printf("000000         000000\n");
		printf("000000         000000\n");
		printf("000000         000000\n");
		printf("000000         000000\n");
		printf("000000         000000\n");
		printf(" 000000       000000\n");
		printf("  000000     000000\n");
		printf("    0000000000000\n");
		printf("      00000000\n");
	}
	else {
		printf("XXXXX      XXXXX\n");
		printf("XXXXX      XXXXX\n");
		printf(" XXXXX    XXXXX\n");
		printf("  XXXXX  XXXXX\n");
		printf("   XXXXXXXXXX\n");
		printf("    XXXXXXXX\n");
		printf("     XXXXXX\n");
		printf("     XXXXXX\n");
		printf("    XXXXXXXX\n");
		printf("   XXXXXXXXXX\n");
		printf("  XXXXX  XXXXX\n");
		printf(" XXXXX    XXXXX\n");
		printf("XXXXX      XXXXX\n");
		printf("XXXXX      XXXXX\n");
	}
}


