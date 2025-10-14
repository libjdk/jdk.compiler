#ifndef _com_sun_tools_javac_file_JavacFileManager$SortFiles$1_h_
#define _com_sun_tools_javac_file_JavacFileManager$SortFiles$1_h_
//$ class com.sun.tools.javac.file.JavacFileManager$SortFiles$1
//$ extends com.sun.tools.javac.file.JavacFileManager$SortFiles

#include <com/sun/tools/javac/file/JavacFileManager$SortFiles.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class JavacFileManager$SortFiles$1 : public ::com::sun::tools::javac::file::JavacFileManager$SortFiles {
	$class(JavacFileManager$SortFiles$1, $NO_CLASS_INIT, ::com::sun::tools::javac::file::JavacFileManager$SortFiles)
public:
	JavacFileManager$SortFiles$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual int32_t compare(::java::nio::file::Path* f1, ::java::nio::file::Path* f2);
	virtual int32_t compare(Object$* f1, Object$* f2) override;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$SortFiles$1_h_