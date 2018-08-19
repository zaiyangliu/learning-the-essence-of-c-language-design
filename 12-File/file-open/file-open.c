#include<stdio.h>
#include<stdlib.h>

FILE *stream;

int main(){

  long l;
  float fp;
  char s[81];
  char c;
  stream = fopen("fscanf.out", "w+");
  if(stream == NULL){
    printf("the file fscanf.out was not open");
    exit(-1);
  }
  else{
    fprintf(stream, "%s\t%ld\t%f\t%c", "a-string", 6500, 3.14, 'x');

    fseek(stream, 0L, SEEK_SET); //重新把指针移动到文件开头

    fscanf(stream, "%s\t", s);
    fscanf(stream, "%ld\t", &l);
    fscanf(stream, "%f\t", &fp);
    fscanf(stream, "%c\t", &c);
    
    printf("%s\n%ld\n%f\n%c\n", s, l, fp, c);
    
    fclose(stream);
   }
  return 0;
}

  
  
