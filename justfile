# Compile locally to .out and run against .in (Usage: just run codeforces/1950A.cpp)
run file:
    g++ -std=c++23 -O2 -Wall -Wextra -DLOCAL -fsanitize=address,undefined -g {{file}} -o {{without_extension(file)}}.out
    ./{{without_extension(file)}}.out < {{without_extension(file)}}.in

