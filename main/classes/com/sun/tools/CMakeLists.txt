#machine generated

add_subdirectory("doclint")
add_subdirectory("javac")
add_subdirectory("sjavac")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools_SRCS)
file(GLOB classes.com.sun.tools_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools_HEADERS}) 
list(LENGTH classes.com.sun.tools_SRCS classes.com.sun.tools_SRCS_LENGTH)
if(classes.com.sun.tools_SRCS_LENGTH)
	add_library(classes.com.sun.tools OBJECT "${classes.com.sun.tools_SRCS}" "${classes.com.sun.tools_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools)
endif()