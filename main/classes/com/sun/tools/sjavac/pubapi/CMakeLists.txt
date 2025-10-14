#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.sjava_18_SRCS)
file(GLOB classes.com.sun.tools.sjava_18_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.sjava_18_HEADERS}) 
list(LENGTH classes.com.sun.tools.sjava_18_SRCS classes.com.sun.tools.sjava_18_SRCS_LENGTH)
if(classes.com.sun.tools.sjava_18_SRCS_LENGTH)
	add_library(classes.com.sun.tools.sjava_18 OBJECT "${classes.com.sun.tools.sjava_18_SRCS}" "${classes.com.sun.tools.sjava_18_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.sjava_18)
endif()