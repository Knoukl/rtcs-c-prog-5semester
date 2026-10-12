/* ----------------------------------------------------*/
/*Имя:Артемьев Кирилл Сергеевич, ПВБО-01-24*/
/*ИМЯ ФАЙЛА: prog.c */
/*НАЗНАЧЕНИЕ ПРОГРАММЫ Порождение дочернего процесса и вывод счётчика*/
/*Порождение дочернего процесса с помощью fork()
Родительский и дочерний процессы печатают значения счётчика
до MAX_COUNT. Оформлено в виде вызова функций ParentProcess()
и ChildProcess(). Поведение изменено с помощью wait() и sleep()*/
/* ----------------------------------------------------*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_COUNT 200

void ChildProcess(void);
void ParentProcess(void);

int main(void)
{
    int pid;

    pid = fork();

    if (pid == -1)
    {
        perror("fork");
        return 1;
    }
    else if (pid == 0)
    {
        ChildProcess();
    }
    else
    {
        ParentProcess();
        wait(NULL);
    }

    return 0;
}