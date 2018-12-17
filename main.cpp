#include<iostream>

#define STACK_MAXSIZE 1024

typedef enum DataType{
  undefined=0,
  filename_begin=1,
  filecontent_begin=2,
  file
};

typedef enum State{
  reading_filename=1,
  reading_stack=2,
};

int stack[STACK_MAXSIZE]={0};

int main(){
  return 0;
}
