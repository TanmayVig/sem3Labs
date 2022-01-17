#include <stdio.h>
#include <stdlib.h>
int main() {
	char *S = malloc(100*sizeof(char));
	printf("Enter the line of text\n");
	gets(S);
	int cv=0, cc=0, cd=0, cs=0, co=0;
	int i=0;
	while(*(S+i)!='\0') {
		char c = *(S+i);
		if((c>='a' && c<='z') || (c>='A' && c<='Z')) {
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
				cv++;
			} else {
				cc++;
			}
		} else if(c>='0' && c<='9') {
			cd++;
		} else if(c == ' ') {
			cs++;
		} else {
			co++;
		}
		i++;
	}
	printf("Number of vowels: %d\n", cv);
	printf("Number of consonants: %d\n", cc);
	printf("Number of digits: %d\n", cd);
	printf("Number of white spaces: %d\n", cs);
	printf("Number of other characters: %d\n", co);
	return 0;
}
