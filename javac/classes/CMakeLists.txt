#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" javac-classes_SRCS)
file(GLOB javac-classes_HEADERS *.h *.hpp)
source_group("Include" FILES ${javac-classes_HEADERS}) 
list(LENGTH javac-classes_SRCS javac-classes_SRCS_LENGTH)
if(javac-classes_SRCS_LENGTH)
	add_library(javac-classes OBJECT "${javac-classes_SRCS}" "${javac-classes_HEADERS}")
	jcpp_enable_bigobj(javac-classes)
endif()