#include <stdio.h>
//mendeklarasi global variabel
//(data type) (variable name) = (value) 
int a = 1;
int b = 3;

void increment() {
	a++;
	b++;
}

int main() {
	increment();
	printf("%d + %d = ", a, b); //output 2 + 4 =
	printf("%d\n", (a+b)); //output 6
}



