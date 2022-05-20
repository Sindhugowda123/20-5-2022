#include<stdio.h>
typedef struct profile
{
enum harish{talented, brilliant, obidient, beautifull}characters;
}var;

int main()
{
	var v1;
	v1.characters = brilliant;
	printf("%d\n", v1.characters);
}
