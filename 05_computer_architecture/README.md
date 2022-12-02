Какой процесс имеет наименьший идентификатор?
$ ps -e
	systemd

Какой идетификтор у вашего текущего shell-процесса?
$ ps -p $$
      PID    PPID    PGID     WINPID   TTY         UID    STIME COMMAND
     1853    1852    1853       7440  pty0      197609 21:56:47 /usr/bin/bash

Сколько всего запущено процессов?
$ ps -a | wc -l
5


