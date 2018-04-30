start:
	g++ ./code/assgn2.cpp -o a 
	g++ ./code/solve.cpp -o b
	./a 
	./b

	
clean:
	rm out.svg a b out.txt
