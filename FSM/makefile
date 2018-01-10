passive: test_with_passive_data.o;fsm_with_passive_data.o
	g++ -o passive test_with_passive_data.o fsm_with_passive_data.o
test_with_passive_data.o: test_with_passive_data.cc; fsm_with_passive_data.cc; fsm_with_passive_data.h
	g++ -c test_with_passive_data.cc
fsm_with_passive_data.o: fsm_with_passive_data.cc; fsm_with_passive_data.h
	g++ -c fsm_with_passive_data.cc

clean:
	-rm -f *.o