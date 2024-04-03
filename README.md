# Использование сигналов для взаимодействия процессов (2024)

* receiver.c: Программа-приемник сигналов. Она бесконечно выводит на экран заданную строку и ожидает сигналов SIGUSR1 и SIGUSR2. При получении каждого из сигналов она меняет выводимую строку.

* sender.c: Программа-отправитель сигналов. Она принимает PID и номер сигнала в качестве параметров командной строки. Она отправляет сигнал SIGUSR1 или SIGUSR2 процессу с указанным PID.

# Сборка и запуск:

1. Скомпилируйте обе программы:

```gcc -o receiver receiver.c```
```gcc -o sender sender.c```

2. Запустите программу-приемник:

```./receiver```, она выведет на экран PID запущенного процесса 

3. Запустите программу-отправитель:

```./sender <PID> <сигнал>```, где сигнал 1 = SIGUSR1, сигнал 2 = SIGUSR2, а PID - это вывод программы reciever
