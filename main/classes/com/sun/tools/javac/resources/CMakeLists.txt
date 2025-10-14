#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.javac_11_SRCS)
file(GLOB classes.com.sun.tools.javac_11_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.javac_11_HEADERS}) 
list(LENGTH classes.com.sun.tools.javac_11_SRCS classes.com.sun.tools.javac_11_SRCS_LENGTH)
if(classes.com.sun.tools.javac_11_SRCS_LENGTH)
	add_library(classes.com.sun.tools.javac_11 OBJECT "${classes.com.sun.tools.javac_11_SRCS}" "${classes.com.sun.tools.javac_11_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.javac_11)
endif()