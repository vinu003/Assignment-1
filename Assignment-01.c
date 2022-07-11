// I have solved all 12 question in one file kindly check it..

#include<stdio.h>
int main()                                   
{
    printf("Hello Students");
    return 0;
}
        
/**************************************/

#include<stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
}

/**************************************/

#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;
}

/**************************************/

#include<stdio.h>
int main()
{
    float A,Pi;
    int R;

    printf("Enter the radius value: ");
    scanf("%d", &R);

    Pi=3.14;
    A=Pi * R * R;

    printf("Area of circle is %f having the radius %d.", A,R);
    return 0;
}

/**************************************/
#include<stdio.h>
int main()
{

    char str[20];
    int len;

    printf("type a word: ");
    scanf("%s", &str);

    printf("Length of ");
    printf("%s%n is ", str,&len);
    printf("= %d", len);

    return 0;
}

/**************************************/

#include<stdio.h>
int main()
{
    char str[50];

    printf("Enter you Name: ");
    scanf("%s", &str);

    printf("\"Hello , %s\"", str);
    return 0;
}

/**************************************/

#include<stdio.h>
int main()
{
    char str[50]= "%d";
    printf("\"%s\"", str);

    return 0;
}

/**************************************/

#include<stdio.h>
int main()
{
    char str[50]= "%n";
    printf("\"%s\"", str);

    return 0;
}

/**************************************/

#include <stdio.h>
int main()
{
    char str[50] = "\\\\";
    printf("\"%s\"", str);

    return 0;
}

/**************************************/

#include<stdio.h>
int main()
{
    int DD,MM,YYYY;

    printf("Enter Date: ");
    scanf("%d %d %d", &DD,&MM,&YYYY);

    printf("Day - %d , Month - %d , Year - %d", DD,MM,YYYY);

    return 0;
}


/**************************************/

#include<stdio.h>
int main()
{
    int HH,MM;

    printf("Enter Hour: ");
    scanf("%d", &HH);

    printf("Enter Minute: ");
    scanf("%d", &MM);

    printf("%d Hour and %d Minute", HH,MM);

    return 0;
}

/**************************************/

int main()
{ 
int x = printf("ineuron");
printf("%d",x);
return 0;
}   // output will be ineuron7