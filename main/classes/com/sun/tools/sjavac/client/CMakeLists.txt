#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.sjava_14_SRCS)
file(GLOB classes.com.sun.tools.sjava_14_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.sjava_14_HEADERS}) 
list(LENGTH classes.com.sun.tools.sjava_14_SRCS classes.com.sun.tools.sjava_14_SRCS_LENGTH)
if(classes.com.sun.tools.sjava_14_SRCS_LENGTH)
	add_library(classes.com.sun.tools.sjava_14 OBJECT "${classes.com.sun.tools.sjava_14_SRCS}" "${classes.com.sun.tools.sjava_14_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.sjava_14)
endif()