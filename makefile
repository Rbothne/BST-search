TreeNumbers: driver.o 
	g++ driver.o -o driver

driver.o: driver.cpp BinarySearchTree.h binaryNode.h
	g++ -c driver.cpp

clean:
	rm *.o TreeNumbers