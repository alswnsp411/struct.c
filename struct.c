#include <stdio.h>

struct student1{  //student1이라는 구조체 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct{
    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{
    struct student1 st1={'A',100,'A'};  //typedef없이 구조체를 만들게 되면 반드시 앞에 struct를 써서 구조체라는 것을 알려줘야한다.

    printf("------- Minju Kim  2020039062-------\n");

    printf("st1.lastName = %c\n",st1.lastName);
    printf("st1.studentId = %d\n",st1.studentId);
    printf("st1.grade = %c\n\n",st1.grade);

    student2 st2= {'B', 200, 'B'};  //typedef을 쓰고 구조체를 만들었기 때문에 struct를 쓰지 않아도 된다.

    printf("st2.lastName = %c\n",st2.lastName);
    printf("st2.studentId = %d\n",st2.studentId);
    printf("st2.grade = %c\n\n",st2.grade);

    student2 st3;

    st3=st2;  //구조 치환 : st2의 값이 st3로 한 번에 복사된다.

    printf("st3.lastName = %c\n",st3.lastName);
    printf("st3.studentId = %d\n",st3.studentId);
    printf("st3.grade = %c\n\n",st3.grade);

    /* equality test */
    /*
    if(st3==st2)  //구조체 전체의 비교로 구조체의 값들을 비교할 수 없다.
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
    */

   return 0;
}
