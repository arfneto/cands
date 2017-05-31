

#include "stdio.h"
main(int argc, char **argv)
{
	char * sounds[26] = {
		"bubbles","clay","confetti","corona","dotted-spiral","flash-1","flash-2",
		"flash-3","glimmer","moon","pinwheel","piston-1","piston-2","piston-3",
		"prism-1","prism-2","prism-3","splits","squiggle","strike","suspension",		
		"timer","ufo","veil","wipe","zig-zag"};
int i;
if(!(argc==2))
{
	printf("%s\tusage: %s 'javascript object name'\n",*argv,*argv);
	return(1);
}
printf("\n\n\n//\tstarting generated code\n\nvar %s =\n{",argv[1]);
for(i='a'; i<='z';i++)
{	/* each loop accounts for lowercase and uppercase 'i' */
	printf("\n\t%c:\t{\n\t\t\tcolor: getRandomColor(),\n",i);
	printf("\t\t\tsound: new Howl\n\t\t\t(");
	printf("{src: [\"/sounds/%s.mp3\"]}", *(sounds+i-97));
	printf(")\n\t\t},\n");
	printf("\n\t%c:\t{\n\t\t\tcolor: getRandomColor(),\n",i-32);
	printf("\t\t\tsound: new Howl\n\t\t\t(");
	printf("{src: [\"/sounds/%s.mp3\"]}", *(sounds+i-97));
	(i=='z')? printf(")\n\t\t}\n};\n"):printf(")\n\t\t},\n");
};
printf("\n\n\n//\tend of generated code\n\n\n");
}
