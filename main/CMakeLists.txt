#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
	"java.compiler:17.35"
	"jdk.zipfs:17.35"
)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:classes.com.sun.source.doctree>"
	"$<TARGET_OBJECTS:classes.com.sun.source.tree>"
	"$<TARGET_OBJECTS:classes.com.sun.source.util>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.doclint>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._0>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._1>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._2>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._3>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._4>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._5>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._6>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._7>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._8>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac._9>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac_10>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac_11>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac_12>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.javac_13>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjavac>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_14>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_15>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_16>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_17>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_18>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_19>"
	"$<TARGET_OBJECTS:classes.com.sun.tools.sjava_20>"
	"$<TARGET_OBJECTS:classes.jdk.internal.shells_22>"
	"$<TARGET_OBJECTS:classes.sun.tools.serialver>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_enable_debug_info(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

install(
	DIRECTORY "include"
	DESTINATION "${JCPP_INSTALL_PATH}"
)

install(
	FILES "dependencies.txt"
	DESTINATION "${JCPP_INSTALL_PATH}"
)
