#machine generated

add_subdirectory("doc")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.shells_21_SRCS)
file(GLOB classes.jdk.internal.shells_21_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.shells_21_HEADERS}) 
list(LENGTH classes.jdk.internal.shells_21_SRCS classes.jdk.internal.shells_21_SRCS_LENGTH)
if(classes.jdk.internal.shells_21_SRCS_LENGTH)
	add_library(classes.jdk.internal.shells_21 OBJECT "${classes.jdk.internal.shells_21_SRCS}" "${classes.jdk.internal.shells_21_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.shells_21)
endif()