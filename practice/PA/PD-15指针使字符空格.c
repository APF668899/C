#include"stdio.h"
#include "string.h"
int main(){
   char *word = "MrFlySand.github.io";
   for(int i = 0; i < strlen(word); i++){
      printf("%c ",*(word+i));
   }
}  