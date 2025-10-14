#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.source.util_SRCS)
file(GLOB classes.com.sun.source.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.source.util_HEADERS}) 
list(LENGTH classes.com.sun.source.util_SRCS classes.com.sun.source.util_SRCS_LENGTH)
if(classes.com.sun.source.util_SRCS_LENGTH)
	add_library(classes.com.sun.source.util OBJECT "${classes.com.sun.source.util_SRCS}" "${classes.com.sun.source.util_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.source.util)
endif()