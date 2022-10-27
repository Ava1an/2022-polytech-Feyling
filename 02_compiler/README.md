-O1 -O2 -O3 — разные уровни оптимизации
-Os — оптимизация размера (.text раздел в objdump 235)
-Ofast — оптимизация скорости (.text раздел в objdump 1438)
-Og — оптимизация для дебага
---------------------

-O0

real    0m0.033s
user    0m0.000s
sys     0m0.032s

15414445 bytes
---------------------

-O1

real    0m0.036s
user    0m0.000s
sys     0m0.031s

15413672 bytes
---------------------

-O2

real    0m0.033s
user    0m0.000s
sys     0m0.047s

15414310 bytes
---------------------

-O3

real    0m0.033s
user    0m0.015s
sys     0m0.047s

15414292 bytes
---------------------

-Ofast

real    0m0.033s
user    0m0.000s
sys     0m0.031s

15415466 bytes
---------------------

-Og

real    0m0.033s
user    0m0.000s
sys     0m0.031s

15413738 bytes
---------------------

-Os

real    0m0.032s
user    0m0.000s
sys     0m0.031s

15413780 bytes
---------------------

-Oz

real    0m0.033s
user    0m0.000s
sys     0m0.031s

15413780 bytes