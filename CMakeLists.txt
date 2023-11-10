#-----------------------------------------------------------------------------
# https://github.com/variar/elp2000-82b
#-----------------------------------------------------------------------------
cmake_minimum_required (VERSION 2.6) 
project(ELP-2000)

#-----------------------------------------------------------------------------
set ( HEADERS
arguments.h
earthfig.h
elp2000-82b.h
mainprob.h
moonfig.h
planetary1.h
planetary2.h
relativistic.h
series.h
solarecc.h
tidal.h )
  
set ( SOURCES
arguments.c
elp2000-82b.c
series.c )

set ( TestC
test.c )

set ( TestCPP
test.cpp )

#-----------------------------------------------------------------------------
# Executables.
#-----------------------------------------------------------------------------
add_executable ( TestC ${TestC})
add_executable ( TestCPP ${TestCPP})

#-----------------------------------------------------------------------------
# Libraries.
#-----------------------------------------------------------------------------
add_library ( ELP-2000_static STATIC ${HEADERS} ${SOURCES} )
set_target_properties ( ELP-2000_static PROPERTIES OUTPUT_NAME "ELP-2000" )

add_library ( ELP-2000_shared SHARED ${HEADERS} ${SOURCES} )
set_target_properties ( ELP-2000_shared PROPERTIES OUTPUT_NAME "ELP-2000" )

#-----------------------------------------------------------------------------
# Link.
#-----------------------------------------------------------------------------
target_link_libraries ( TestC ELP-2000_static m)
target_link_libraries ( TestCPP ELP-2000_static m)
