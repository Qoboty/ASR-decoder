
include ../hubo.mk

CXXFLAGS+=-I. -I.. 



all:test-config-parse-options test-text-util libutil.a

test-config-parse-options:test-config-parse-options.o config-parse-options.o text-util.o
	$(GXX) $(CXXFLAGS) -o $@ $^

test-text-util:test-text-util.o text-util.o
	$(GXX) $(CXXFLAGS) -o $@ $^

%.o:%.cpp
	$(GXX) $(CXXFLAGS) -c -o $@ $<

libutil.a:config-parse-options.o text-util.o io-funcs.o read-vector.o
	$(AR) -rc $@ $^

.PHONY:

clean:
	rm -f *.o test-config-parse-options libutil.a test-text-util
