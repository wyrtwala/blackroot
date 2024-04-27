#include <stdio.h>
#include <stdlib.h>

void trim (char *); //Not yet defined
char* get_origin_url(); // Not fully defined


int main (){

  return 0;
}



char* get_origin_url(){
    printf("URL:  ");
  char origin_url[1000]; 
  scanf("%999s", origin_url);
  trim(&origin_url);
}
