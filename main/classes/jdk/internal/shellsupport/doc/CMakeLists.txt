#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.shells_22_SRCS)
file(GLOB classes.jdk.internal.shells_22_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.shells_22_HEADERS}) 
list(LENGTH classes.jdk.internal.shells_22_SRCS classes.jdk.internal.shells_22_SRCS_LENGTH)
if(classes.jdk.internal.shells_22_SRCS_LENGTH)
	add_library(classes.jdk.internal.shells_22 OBJECT "${classes.jdk.internal.shells_22_SRCS}" "${classes.jdk.internal.shells_22_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.shells_22)
endif()