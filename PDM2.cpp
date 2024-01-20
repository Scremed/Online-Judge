#include <stdio.h>
//mendeklarasi global constant dengan metode #define
//#define (variable name) (value)
#define CONSTVAR 3

//mendeklarasi global constant dengan const
//const (data type) (variable name) = (value)
const int const_Var = 5;

int main() {
	printf("%d %d", CONSTVAR, const_Var); //output 3 5
	int change = 2;
	const_Var = change;
	CONSTVAR = change;
	//error const_Var/CONSTVAR is read-only value
}


