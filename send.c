#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	if(argc < 2)
		return -1;
	if(!strcmp(argv[1],"bel")){
		system("echo  \"\x07\" >> /home/lan/shared");
		return 0;
	}
	char buf[100+strlen(argv[1])];
	buf[0] = '\0';
	strcat(buf, "echo \"");
	strcat(buf, argv[1]);
	strcat(buf, "\" >> /home/lan/shared");
	system(buf); 
}
