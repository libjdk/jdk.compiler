#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.javac_12_SRCS)
file(GLOB classes.com.sun.tools.javac_12_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.javac_12_HEADERS}) 
list(LENGTH classes.com.sun.tools.javac_12_SRCS classes.com.sun.tools.javac_12_SRCS_LENGTH)
if(classes.com.sun.tools.javac_12_SRCS_LENGTH)
	add_library(classes.com.sun.tools.javac_12 OBJECT "${classes.com.sun.tools.javac_12_SRCS}" "${classes.com.sun.tools.javac_12_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.javac_12)
endif()