# Windows build
https://drive.google.com/file/d/1wl9AtmJrxTJYlYI6JFZIJI9IyAhlehru/view?usp=drive_link
# Dokumentacja
https://github.com/Isembart/Megadeth

# Skład osobowy grupy
- Maurycy Farski
- Daniel Pietruczyk-Phan
- Marcin Galewski
# Podział zadań
- Maurycy: Design systemów, programowanie gamplayu
- Marcin: Design UI, Design SFX
- Daniel: Design Mapy, Design Przeciwników

# Mechaniki

### Game loop
Znajdź teleporter -> Załaduj teleporter -> Przejdź do następnego poziomu
Motywacja gracza: Poszerzenie arsenału o dodatkową umiejętność.

Wyścig z czasem:
Z każdą minutą gra staje się trudniejsza. Gracz musi zdecydować czy skupi się na jak najszybszym przejściu z poziomu na poziom, czy też postara się zebrać odpowiednio dużo złota aby kupić dostępne na poziomie ulepszenia. 
Aktywacja teleportera zmusza gracza do pozostania w jego zasięgu. Mimo że teleporter zapewni graczowi więcej złota, to nie pozwoli mu go wydać dopóki nie skończy ładować teleportera.

Gra nakłada presję na gracza zmuszającą go do optymalizacji zarządzania czasem.
Dodatkową motywacją jest mechanizm losowych ulepszeń/umiejętności.

### Różnorodność poziomów
W aktualnej wersji znajduje się tylko jedna mapa. Docelowo każde przejście poziomu powinno pozwolić graczowi zwiedzić różne środowiska. W zależności od liczby przebytych poziomów gracz jest w stanie zobaczyć co raz to trudniejszych przeciwników, którzy nie mają szans pojawić się na wcześniejszych poziomach.

# Plan na przyszłość
- Poprawna grafika i modele
- Więcej różnorodnych umiejętności
- Więcej ciekawych ulepszeń
- Wiele map
- QoL

# Technologie 
**Silnik:** Unreal Engine 5.4.1 C++ & Blueprint
# Assety
Wszelkie dostępne w grze assety tj. muzyka, ikony zostały pobrane z https://itch.io
# Inspiracje
Risk of Rain, Risk of Rain 2, Vampire Survivors, V rising, Albion online


# Jak to działa?
Mechanika skalowania poziomu trudności jest zaczerpnięta z RoR2, informacje na temat jej działania można przeczytać pod linkami:
https://riskofrain2.fandom.com/wiki/Difficulty
https://riskofrain2.fandom.com/wiki/Level

### Spawning przeciwników
Spawning przeciwników jest oparty o tzw obiekty **CombatDirector**.
Każdy z nich posiada ilość kredytów, które jest w stanie wydać na spawn przeciwnika. Ilość otrzymywanych kredytów co sekundę jest określona na podstawie współczynnika trudności (https://riskofrain2.fandom.com/wiki/Difficulty). 
Na mapie istnieją dwa takie obiekty - FastCombatDirector (czas pomiędzy spawnami: 3-9s) oraz SlowCombtDirector (czas pomiędzy spawnami: 15-30s). Jeśli director poprawnie zespawnuje przeciwnika wchodzi on w stan fali, w którym będzie spawnował tego samego przeciwnika tak długo jak to możliwe (o ile nie skończą mu się kredyty), czas pomiędzy spawnami w fali to od 0.5 do 2 sekund. Po skończonym spawnie fali (gdy directorowi nie uda się przeprowadzić spawnu), director wylosuje nowego przeciwnika.

Cały proces jest dogłębnie opisany tutaj:
https://riskofrain2.fandom.com/wiki/Directors

### Bardzo poglądowy UML
![uml](https://github.com/Isembart/Megadeth/blob/main/UML.png)
