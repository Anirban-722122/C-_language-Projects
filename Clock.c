//MY 3rd Project:-Digital Clock//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<unistd.h>
void fill_time(char*,int);
void fill_date(char*);
int input_format();
void clear_screen();

int main(){
char time[50],date[50];

int format= input_format();
while(1){
fill_time(time,format);
fill_date(date);
clear_screen();
  printf(" current time is:%s\n",time);
  printf(" date is:%s\n",date);
  sleep(1);//sleep for 1 second
}
  return 0;
}
void clear_screen(){
  #ifdef _WIN32
  system("cls");
  #else
  system("clear");
  #endif
}
int input_format(){
  int format;
printf("\n choose the time format");
printf("\n 1.24 hour format");
printf("\n 2.12 hour format(default)");
printf("\n make a choice(1\2):");
scanf("%d",&format);
return format;
}
void fill_date(char* buffer){
  time_t raw_time;
  struct tm *current_time;
  time(&raw_time);
  current_time=localtime(&raw_time);
  strftime(buffer,100,"%A %B %d %Y",current_time);

}

void fill_time(char* buffer,int format){
  time_t raw_time;
  struct tm *current_time;
  

  time(&raw_time);
  current_time=localtime(&raw_time);
  if(format ==1){
   strftime(buffer,50,"%H:%M:%S",current_time);
  }else{
   strftime(buffer,50,"%I:%M:%S %p",current_time);
  }
}
