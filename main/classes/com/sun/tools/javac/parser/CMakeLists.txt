#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.javac._8_SRCS)
file(GLOB classes.com.sun.tools.javac._8_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.javac._8_HEADERS}) 
list(LENGTH classes.com.sun.tools.javac._8_SRCS classes.com.sun.tools.javac._8_SRCS_LENGTH)
if(classes.com.sun.tools.javac._8_SRCS_LENGTH)
	add_library(classes.com.sun.tools.javac._8 OBJECT "${classes.com.sun.tools.javac._8_SRCS}" "${classes.com.sun.tools.javac._8_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.javac._8)
endif()