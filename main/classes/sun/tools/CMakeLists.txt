#machine generated

add_subdirectory("serialver")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.tools_SRCS)
file(GLOB classes.sun.tools_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.tools_HEADERS}) 
list(LENGTH classes.sun.tools_SRCS classes.sun.tools_SRCS_LENGTH)
if(classes.sun.tools_SRCS_LENGTH)
	add_library(classes.sun.tools OBJECT "${classes.sun.tools_SRCS}" "${classes.sun.tools_HEADERS}")
	jcpp_enable_bigobj(classes.sun.tools)
endif()