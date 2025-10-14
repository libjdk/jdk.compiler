#ifndef _com_sun_tools_javac_file_JavacFileManager$3_h_
#define _com_sun_tools_javac_file_JavacFileManager$3_h_
//$ class com.sun.tools.javac.file.JavacFileManager$3
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class JavacFileManager$3 : public ::java::util::Iterator {
	$class(JavacFileManager$3, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JavacFileManager$3();
	void init$(::java::lang::Iterable* val$paths);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::Iterable* val$paths = nullptr;
	::java::util::Iterator* iter = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$3_h_