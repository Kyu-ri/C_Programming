#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	RUNTIME	10
#define	HIT_SCORE 10

void main(void){

	long inputTime;
	int nInput, nResult;
	int nTotalScore = 0;
	int nBonus = 0;
	int n, m;

	srand((unsigned int)time(NULL));

	while (1){
		
		n = rand()%10;
		m = rand()%10;

		printf("%d X %d = ", n, m);
		scanf_s("%d", &nInput, sizeof(int));
		
		inputTime = clock();

		if ((inputTime / CLOCKS_PER_SEC) < RUNTIME){
			if (nInput == n*m) {
				nBonus++;
				nTotalScore += HIT_SCORE * nBonus;
				printf("[정답] Bonus : %d, Total Score : %d\n", nBonus, nTotalScore);
			}
			else {
					nBonus = 0;
					nTotalScore = nTotalScore - 10;
					printf("[오답] Total Score : %d\n", nTotalScore);
			}
		}
		else{
			nResult = nTotalScore;
			break;
		}
		
	}
	printf(">> Total Score : %d\n", nResult);
}
