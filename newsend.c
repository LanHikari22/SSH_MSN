#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	if(argc < 2)
		return -1;
	if(!strcmp(argv[1],"bel")){
		system("echo  \"\x07\" >> /home/farawla/shared");
		return 0;
	}
	char buf[100+strlen(argv[1])];
	buf[0] = '\0';
	strcat(buf, "/bin/echo -e \"\\e[\"\"$TAILCOLOR\"\"m$TAILUSER\\e[0m: ");
	strcat(buf, argv[1]);
	strcat(buf, "\" >> /home/farawla/shared");
	system(buf); 
	return 0;
}
