# sort_contest_autumn_2016

sort_header.cpp - заголовочный файл, прикрепляемый в начало Вашего решения
sort_quick.cpp - пример реализации quick sort
rand_demo.cpp - работа со случайными числами
sort_delme.cpp - реализация select sort в интерфейсе BlackInt

cat sort_header.cpp sort_quick.cpp > sort_quick_header.cpp
g++ sort_quick_header.cpp -o sort_quick_header

seq 2000 | xargs -I{} echo 1 | ./sort_quick_header
41933 1 17964 10916 0.000731

Пост в блоге курса: https://park.mail.ru/blog/topic/5016/
Задача размещениа в специальном контесте: http://tp-test1.tech-mail.ru/cgi-bin/new-client?contest_id=76
В новом интерфейсе: http://tp-test1.tech-mail.ru:5000/contest/76/1/
Рейтинг решений: http://tp-test1.tech-mail.ru:82/leaderboard/
