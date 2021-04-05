accounts_payable: main.o IPayable.o Manager.o ShopWorker.o Employee.o
	g++ -std=c++11 -o accounts_payable main.cpp IPayable.cpp Manager.cpp ShopWorker.cpp Employee.cpp

main.o: main.cpp Manager.h ShopWorker.h
	g++ -c -std=c++11 main.cpp

IPayable.o: IPayable.cpp IPayable.h
	g++ -c -std=c++11 IPayable.cpp

Manager.o: Manager.cpp Manager.h IPayable.h Employee.h
	g++ -c -std=c++11 Manager.cpp

ShopWorker.o: ShopWorker.cpp ShopWorker.h IPayable.h Employee.h
	g++ -c -std=c++11 ShopWorker.cpp

Employee.o: Employee.cpp IPayable.h
	g++ -c -std=c++11 Employee.cpp

clean:
	rm *.o accounts_payable