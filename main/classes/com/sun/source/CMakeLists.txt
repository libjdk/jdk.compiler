#machine generated

add_subdirectory("doctree")
add_subdirectory("tree")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.source_SRCS)
file(GLOB classes.com.sun.source_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.source_HEADERS}) 
list(LENGTH classes.com.sun.source_SRCS classes.com.sun.source_SRCS_LENGTH)
if(classes.com.sun.source_SRCS_LENGTH)
	add_library(classes.com.sun.source OBJECT "${classes.com.sun.source_SRCS}" "${classes.com.sun.source_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.source)
endif()