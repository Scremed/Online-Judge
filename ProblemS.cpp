#include <stdio.h>

int main(){
	char a[100];
	scanf("%[^\n]s", a);
	printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", a);
	return 0;
}
