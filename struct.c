#include <stdio.h>

struct student1
{
    char lastName;
    int studentId;
    char grade;
};
typedef struct
{
    char lastName;
    int studentId;
    char grade;
} student2;
int main()
{
    printf("\n2021041069 ������\n\n");
    struct student1 st1 = {'A', 100, 'A'};         // st1�� ���� �������.
    printf("st1.lastName = %c\n", st1.lastName);   // st1 ����ü �ȿ� �ִ� lastname�� ���� ���.
    printf("st1.studentId = %d\n", st1.studentId); // st1 ����ü �ȿ� �ִ� studentId�� ���� ���.
    printf("st1.grade = %c\n", st1.grade);         // st1 ����ü �ȿ� �ִ� grade�� ���� ���.
    student2 st2 = {'B', 200, 'B'};                // st2�� ���� �������.
    printf("\nst2.lastName = %c\n", st2.lastName); // st2 ����ü �ȿ� �ִ� lastname�� ���� ���.
    printf("st2.studentId = %d\n", st2.studentId); // st2 ����ü �ȿ� �ִ� studentId�� ���� ���.
    printf("st2.grade = %c\n", st2.grade);         // st2 ����ü �ȿ� �ִ� grade�� ���� ���.
    student2 st3;                                  // ���ο� ����ü st3�� ����.
    st3 = st2;                                     // st2�� ��� ���� st3�� ����.
    printf("\nst3.lastName = %c\n", st3.lastName); // st3 ����ü �ȿ� �ִ� lastname�� ���� ���.
    printf("st3.studentId = %d\n", st3.studentId); // st3 ����ü �ȿ� �ִ� studentId�� ���� ���.
    printf("st3.grade = %c\n", st3.grade);         // st3 ����ü �ȿ� �ִ� grade�� ���� ���. ��������� st2���� �����Ͽ����Ƿ� st2���� ����.
    /* equality test */
    if (st2.lastName == st3.lastName && st2.studentId == st3.studentId && st2.grade == st3.grade) // ������ �ڵ�
        // ����ü������ ��� �˻�� �Ұ���. ����ü�� ���� ������ ���Ϸ��� ��� ���� ���� ���ؾ� ��.
        // Ex) st3=st2 ���·� ��ü ������ �ϰų� ���� �ڵ�ó�� ������ ������ ������ ��.
        printf("\nequal\n");
    else
        printf("\nnot equal\n");
    return 0;
}