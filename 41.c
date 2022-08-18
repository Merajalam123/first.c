 #include<stdio.h>
int subtract() // here we have to define function
{
int a,b, subtract;        // after that write code previous type
printf("enter the value of a nad b\n",a,b);
scanf("%d%d",&a,&b); //  enter two number we have o give %d%d between the colom
subtract=a-b;
printf("subtract of a and b is %d\n",a-b);
return 0;
}

int main(){ // here we have to give int main, after that write below what will you do  
subtract();
printf("hello\n");
subtract();}