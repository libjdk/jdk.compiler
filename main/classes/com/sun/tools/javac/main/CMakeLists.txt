#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.javac._6_SRCS)
file(GLOB classes.com.sun.tools.javac._6_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.javac._6_HEADERS}) 
list(LENGTH classes.com.sun.tools.javac._6_SRCS classes.com.sun.tools.javac._6_SRCS_LENGTH)
if(classes.com.sun.tools.javac._6_SRCS_LENGTH)
	add_library(classes.com.sun.tools.javac._6 OBJECT "${classes.com.sun.tools.javac._6_SRCS}" "${classes.com.sun.tools.javac._6_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.javac._6)
endif()