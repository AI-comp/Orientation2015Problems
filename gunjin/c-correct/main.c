#include <stdio.h>
#include <string.h>

char *get_result_str(char result) {
	switch(result) {
		case 'o':
			return "FRIEND";
			break;
		case 'x':
			return "ENEMY";
			break;
		case '=':
			return "DRAW";
			break;
		default:
			break;
	}
	return "";
}

int get_result(int index_f, int index_e) {
	char table[15][15] = {
		{'=', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'x', '=',},
		{'x', '=', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', '=',},
		{'x', 'x', '=', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', '=', 'o', 'o', 'o', 'o', 'o', 'x', 'x', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', 'x', '=', 'o', 'o', 'o', 'o', 'x', 'x', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', 'x', 'x', '=', 'o', 'o', 'o', 'x', 'x', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', 'x', 'x', 'x', '=', 'o', 'o', 'x', 'x', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', 'x', 'x', 'x', 'x', '=', 'o', 'x', 'x', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', '=', 'x', 'x', 'o', 'o', 'o', '=',},
		{'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', '=', 'o', 'o', 'o', 'o', 'o',},
		{'x', 'x', 'x', 'o', 'o', 'o', 'o', 'o', 'o', 'x', '=', 'o', 'x', 'o', '=',},
		{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', '=', 'o', 'o', '=',},
		{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'o', 'x', '=', 'o', 'o',},
		{'o', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', '=', '=',},
		{'=', '=', '=', '=', '=', '=', '=', '=', '=', 'x', '=', '=', 'x', '=', '=',},
	};
	return table[index_f][index_e];
}

int get_index(char str[4]) {
	char names[15][4] = {
		"GEN", "LTG", "MJG", "COL", "LTC", "MAJ", "CPT", "1LT", "2LT", "PLA", "TNK", "CAV", "ENG", "SPY", "MIN",
	};
	int i;
	for(i = 0; i < 15; i++) {
		if(strcmp(str, names[i]) == 0) {
			return i;
		}
	}
	return -1;
}

int main() {
	int	N, i, index_f, index_e;
	char F[4], E[4], result;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%s %s", F, E);
		index_f = get_index(F);
		index_e = get_index(E);
		result = get_result(index_f, index_e);
		printf("%s\n", get_result_str(result));
	}
	return 0;
}