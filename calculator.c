#include <stdio.h>
#include <math.h>
void print_menu();
double modulus(int,int);
double division(double a,double b);
int main(){
  int choice;
  double first,second,result;
  while(1){
    print_menu();
  scanf("%d",&choice);
  if(choice == 7){
    break;
  }
  if(choice <1 || choice >7){
    fprintf(stderr,"Invalid Menu Choice");
    continue;
  }

  printf("\nenter your first number:-");
  scanf("%lf",&first);
  printf("\nenter your second number:-");
  scanf("%lf",&second);
  switch(choice)
  {
    case 1://add
     result=first+second;
    break;
    case 2://subtraction
     result= first-second;
    break;
    case 3://division
     result=division(first,second);
    break;
    case 4://multiply
     result=first*second;
    break;
    case 5://modulus
     result=modulus(first,second);
    break;
    case 6://power
     result=pow(first,second);
    break;
    default:
    break;
  }
  if(!isnan(result)){
    printf("\nthe result of the operation is:%.2f",result);
  }


  return 0;
  }
}
double modulus(int a,int b){//function defination for modulus of two number
  if(b==0){
    fprintf(stderr,"Invalid argument for modulus");
    return NAN;
  }else{
    return a % b;
  }

}
double division(double a,double b){//function defination for dividing two number
  if(b==0){
    fprintf(stderr,"Invalid argument for division");
    return NAN;//NAN-not a number 
  }else{
    return a/b;
  }

}
void print_menu() {//function for the menu
    printf("\n-------------------------------------------------------------------------------------------\n");
    printf(" Welcome to the Simple Calculator\n");
    printf("\nChoose one of the following operators");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Division");
    printf("\n4.Multiply");
    printf("\n5.Modulus");
    printf("\n6.Power");
    printf("\n7.Exit");
    printf("\n now,enter your choice:");   
}



