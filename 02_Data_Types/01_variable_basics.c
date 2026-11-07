
#include<stdio.h>
int main(){
    int age=25;
    float gpa=3.85;
    double pi_value=3.1415926535;
    char grade='A';
    printf("Age=%d,size= %zu bytes\n",age,sizeof(age));
    printf("GPA=%.2f,size= %zu bytes\n",gpa,sizeof(gpa));
    printf("PI=%.10lf,size= %zu bytes\n",pi_value,sizeof(pi_value));
    printf("Grade=%c,size= %zu bytes",grade,sizeof(grade));
    return 0;
}