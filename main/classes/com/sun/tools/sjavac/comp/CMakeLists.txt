#machine generated

add_subdirectory("dependencies")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.sjava_15_SRCS)
file(GLOB classes.com.sun.tools.sjava_15_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.sjava_15_HEADERS}) 
list(LENGTH classes.com.sun.tools.sjava_15_SRCS classes.com.sun.tools.sjava_15_SRCS_LENGTH)
if(classes.com.sun.tools.sjava_15_SRCS_LENGTH)
	add_library(classes.com.sun.tools.sjava_15 OBJECT "${classes.com.sun.tools.sjava_15_SRCS}" "${classes.com.sun.tools.sjava_15_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.sjava_15)
endif()