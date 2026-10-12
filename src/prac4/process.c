/* ----------------------------------------------------*/
/*Имя:Артемьев Кирилл Сергеевич, ПВБО-01-24*/
/*ИМЯ ФАЙЛА: process.c */
/*НАЗНАЧЕНИЕ ПРОГРАММЫ Реализация функций родительского и дочернего процессов*/
/*Реализация функций ParentProcess() и ChildProcess().
Каждая функция в цикле печатает значение счётчика до MAX_COUNT.
Поведение изменено: дочерний процесс спит в начале, родитель
печатает свой PID и PID ребёнка, чтобы показать разницу процессов.*/
/* ----------------------------------------------------*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#define MAX_COUNT 200

void ChildProcess(void)
{
    int i;

    sleep(1);

    printf("Child process: pid = %d, ppid = %d\n", getpid(), getppid());

    for (i = 1; i <= MAX_COUNT; i++)
    {
        printf("   This line is from child, value = %d\n", i);
    }

    printf("*** Child process is done ***\n");
}

void ParentProcess(void)
{
    int i;

    printf("Parent process: pid = %d\n", getpid());

    for (i = 1; i <= MAX_COUNT; i++)
    {
        printf("This line is from parent, value = %d\n", i);
    }

    printf("*** Parent process is done ***\n");
}