carBase: bin/mainA3.o bin/addNewCar.o bin/countCars.o bin/loadCarData.o bin/lookForCarId.o bin/lookForCarModelType.o bin/noMoreCars.o bin/oneLessCar.o bin/printAll.o bin/printOne.o bin/sortCarId.o
	gcc -Wall -std=c99 bin/mainA3.o bin/addNewCar.o bin/countCars.o bin/loadCarData.o bin/lookForCarId.o bin/lookForCarModelType.o bin/noMoreCars.o bin/oneLessCar.o bin/printAll.o bin/printOne.o bin/sortCarId.o

bin/mainA3.o: src/mainA3.c include/headerA3.h
	gcc -Wall -std=c99 -c src/mainA3.c -o bin/mainA3.o

bin/addNewCar.o: src/addNewCar.c include/headerA3.h
	gcc -Wall -std=c99 -c src/addNewCar.c -o bin/addNewCar.o

bin/countCars.o: src/countCars.c include/headerA3.h
	gcc -Wall -std=c99 -c src/countCars.c -o bin/countCars.o

bin/loadCarData.o: src/loadCarData.c include/headerA3.h
	gcc -Wall -std=c99 -c src/loadCarData.c -o bin/loadCarData.o

bin/lookForCarId.o: src/lookForCarId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookForCarId.c -o bin/lookForCarId.o

bin/lookForCarModelType.o: src/lookForCarModelType.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookForCarModelType.c -o bin/lookForCarModelType.o

bin/noMoreCars.o: src/noMoreCars.c include/headerA3.h
	gcc -Wall -std=c99 -c src/noMoreCars.c -o bin/noMoreCars.o

bin/oneLessCar.o: src/oneLessCar.c include/headerA3.h
	gcc -Wall -std=c99 -c src/oneLessCar.c -o bin/oneLessCar.o

bin/printAll.o: src/printAll.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printAll.c -o bin/printAll.o

bin/printOne.o: src/printOne.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printOne.c -o bin/printOne.o

bin/sortCarId.o: src/sortCarId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/sortCarId.c -o bin/sortCarId.o

clean:
	rm -f bin/*.o bin/carBase
