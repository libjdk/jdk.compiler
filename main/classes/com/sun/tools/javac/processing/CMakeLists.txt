#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.javac_10_SRCS)
file(GLOB classes.com.sun.tools.javac_10_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.javac_10_HEADERS}) 
list(LENGTH classes.com.sun.tools.javac_10_SRCS classes.com.sun.tools.javac_10_SRCS_LENGTH)
if(classes.com.sun.tools.javac_10_SRCS_LENGTH)
	add_library(classes.com.sun.tools.javac_10 OBJECT "${classes.com.sun.tools.javac_10_SRCS}" "${classes.com.sun.tools.javac_10_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.javac_10)
endif()