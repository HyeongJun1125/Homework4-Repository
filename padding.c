#include <stdio.h>
struct student
{
    char lastName[13]; /* 13 bytes */ // 13����Ʈ�̹Ƿ� ����� 4�� ����� 16�� ä��� ���� padding byte�� 3byte �߰��� ��.
    int studentId; /* 4 bytes */      // �̹� 4�� ����̹Ƿ� padding byte X.
    short grade; /* 2 bytes */        // ���� ����� 4�� ����� 4�� ä��� ���� padding byte�� 2byte �߰��� ��.
    // ���� ���� ũ�� 19byte�� padding byte�� 5byte �߰��� ���Ƿ� �� 24byte�� ũ�Ⱑ ��.
};
int main()
{
    printf("\n2021041069 ������\n\n");
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student)); // �� ���� ���Ͽ� ����ü�� ũ��� 24byte.
    printf("size of int = %ld\n", sizeof(int));                // int �ڷ����� ũ��� 4byte.
    printf("size of short = %ld\n", sizeof(short));            // short �ڷ����� ũ��� 2byte.
    return 0;
}