bin_PROGRAMS=mhssvad
mhssvad_SOURCES=IOServiceKeep.cpp tcpasio.cpp mhssvad.cpp

mhssvad_LDFLAGS = -L/usr/local/lib
BOOST_LIBS = -lboost_system-mt -lboost_thread-mt -lboost_filesystem-mt
mhssvad_LDADD = ${BOOST_LIBS} -lpthread
