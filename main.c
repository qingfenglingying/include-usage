#include <stdio.h>

#include "include1.h"
#include "include2.h"

typedef struct
{
    int  m_old;
    char m_name[10];
} person;
int main()
{
    person Shane;
    
    testEnum a;
    a = first;
    testStruct b;
    b.m_enum = a;
    b.m_num = 10;
    printf("a = %d\r\n", a);
    printf("hello word");

    return 0;
}