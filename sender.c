#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Использование: %s <PID> <сигнал>\n", argv[0]);
    printf("Сигнал: 1 - SIGUSR1, 2 - SIGUSR2\n");
    return 1;
  }

  pid_t pid = atoi(argv[1]);

  int signal_num = atoi(argv[2]);

  if (signal_num == 1) {
    kill(pid, SIGUSR1);
  } else if (signal_num == 2) {
    kill(pid, SIGUSR2);
  } else {
    printf("Неверный номер сигнала!\n");
    return 1;
  }

  printf("Сигнал %d отправлен процессу с PID %d\n", signal_num, pid);

  return 0;
}