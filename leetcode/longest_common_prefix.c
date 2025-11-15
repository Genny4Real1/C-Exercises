//
// Created by RussoAndrea on 15/11/2025.
//
typedef struct
{
char string;
int len;
} object;


#include <string.h>


int main (int argc, char **argv)
{
if (argc < 2) printf("missing arguments\n"); return 1;
int count = 1;
while (argv[count] != NULL) count++;
object words[count];
for (int i = 1, j = 0; i <= count; i++, j++)  words[j].string = argv[i];
for (int k = 0; k < count; k++) words[k].len = strlen(words[k].string);

for (int l = 0; l < count; l++) printf("object number %d: %s, of len %d\n", i, words[l].string, words[l].len);
return 0;

}