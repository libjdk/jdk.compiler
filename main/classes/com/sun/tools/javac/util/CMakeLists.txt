#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.javac_13_SRCS)
file(GLOB classes.com.sun.tools.javac_13_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.javac_13_HEADERS}) 
list(LENGTH classes.com.sun.tools.javac_13_SRCS classes.com.sun.tools.javac_13_SRCS_LENGTH)
if(classes.com.sun.tools.javac_13_SRCS_LENGTH)
	add_library(classes.com.sun.tools.javac_13 OBJECT "${classes.com.sun.tools.javac_13_SRCS}" "${classes.com.sun.tools.javac_13_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.javac_13)
endif()