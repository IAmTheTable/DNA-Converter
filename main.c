#include <stdio.h>
#include <string.h>
#define cout printf
int main(void) {
  char input[1024];
  char Convert[1024];
  char mRNA[1024];
cout("Input the genetic code. make sure there is no space.\n Ex(AGCTAGTCTTGC)\n\n");
scanf("%s", input);
for(int i = 0; i < strlen(input); i++){
  switch(input[i]){
    case 'A':
    strcpy(&mRNA[i], "U");
    strcpy(&Convert[i], "T");
    break;
    case 'T':
    strcpy(&mRNA[i], "A");
    strcpy(&Convert[i], "A");
    break;
    case 'C':
    strcpy(&mRNA[i], "G");
    strcpy(&Convert[i], "G");
    break;
    case 'G':
    strcpy(&mRNA[i], "C");
    strcpy(&Convert[i], "C");
    break;
    default:
    cout("not a valid input\n");
    continue;
  }
}
cout("Converted: %s\n\n",Convert);
cout("mRNA: %s\n", mRNA);
cout("Thanks for using this, ya boi made it.\n");
  return 0;
}