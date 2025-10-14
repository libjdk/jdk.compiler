#machine generated

add_subdirectory("client")
add_subdirectory("comp")
add_subdirectory("options")
add_subdirectory("pubapi")
add_subdirectory("server")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.sjavac_SRCS)
file(GLOB classes.com.sun.tools.sjavac_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.sjavac_HEADERS}) 
list(LENGTH classes.com.sun.tools.sjavac_SRCS classes.com.sun.tools.sjavac_SRCS_LENGTH)
if(classes.com.sun.tools.sjavac_SRCS_LENGTH)
	add_library(classes.com.sun.tools.sjavac OBJECT "${classes.com.sun.tools.sjavac_SRCS}" "${classes.com.sun.tools.sjavac_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.sjavac)
endif()