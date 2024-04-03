#include <stdio.h>
#include <signal.h>
#include <unistd.h>

char *message = "Привет!\n";

void handle_sigusr1(int signum) {
  message = "SIGUSR1 получен!\n";
}

void handle_sigusr2(int signum) {
  message = "SIGUSR2 получен!\n";
}

int main() {
  // Регистрация обработчиков сигналов
  signal(SIGUSR1, handle_sigusr1);
  signal(SIGUSR2, handle_sigusr2);

  // Вывод PID
  printf("PID: %d\n", getpid());

  while (1) {
    // Вывод сообщения
    printf("%s", message);

    // Ожидание сигнала
    pause();
  }

  return 0;
}