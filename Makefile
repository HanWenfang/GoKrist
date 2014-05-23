

include common.mk

default: bin/GoKrist

bin/GoKrist: $(obj-go_krist)
	$(CPP) $^ -o $@ $(LIBRARY) $(SYSLIBS)

%.o: %.cpp
	$(CPP) -Wall $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(obj-go_krist) bin/GoKrist



