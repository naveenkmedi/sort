$build:
	g++ src/wait.cpp -o w.elf
	g++ src/bin.cpp -o b.elf
	g++ src/floor.cpp -o f.elf
	gcc src/lList.c -o l.elf
	gcc src/insertion.c -o i.elf
	gcc src/mergeS.c -o m.elf
	gcc src/sort.c -o s.elf
