#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.source.tree_SRCS)
file(GLOB classes.com.sun.source.tree_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.source.tree_HEADERS}) 
list(LENGTH classes.com.sun.source.tree_SRCS classes.com.sun.source.tree_SRCS_LENGTH)
if(classes.com.sun.source.tree_SRCS_LENGTH)
	add_library(classes.com.sun.source.tree OBJECT "${classes.com.sun.source.tree_SRCS}" "${classes.com.sun.source.tree_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.source.tree)
endif()