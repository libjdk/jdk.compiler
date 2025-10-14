#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.tools.serialver_SRCS)
file(GLOB classes.sun.tools.serialver_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.tools.serialver_HEADERS}) 
list(LENGTH classes.sun.tools.serialver_SRCS classes.sun.tools.serialver_SRCS_LENGTH)
if(classes.sun.tools.serialver_SRCS_LENGTH)
	add_library(classes.sun.tools.serialver OBJECT "${classes.sun.tools.serialver_SRCS}" "${classes.sun.tools.serialver_HEADERS}")
	jcpp_enable_bigobj(classes.sun.tools.serialver)
endif()