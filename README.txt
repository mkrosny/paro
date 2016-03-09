0. Skompilować projekt:
> mkdir build
> cd build
> cmake ..
> make

1. Uruchomić valgrind1 i użyć valgrinda, aby sprawdzić wycieki pamięci
> ./valgrind1
> valgrind ./valgrind1
Poprawić kod tak, aby nie było wycieku pamięci, skompilować i ponowanie sprawdzić program valgrindem

2. Uruchomić valgrind2 i analogicznie użyć valgrinda aby sprawdzić wycieki pamięci. Poprawić program.

3. Uruchomić valgrind3 i sprawdzić czy są w nim wycieki pamięci. Poprawić program.

4. Zmień kod w pliku valgrind3.cpp tak, aby używał unique_ptr.
