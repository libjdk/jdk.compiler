#ifndef _com_sun_tools_javac_file_JavacFileManager$2_h_
#define _com_sun_tools_javac_file_JavacFileManager$2_h_
//$ class com.sun.tools.javac.file.JavacFileManager$2
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

class JavacFileManager$2 : public ::java::util::Iterator {
	$class(JavacFileManager$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JavacFileManager$2();
	void init$(::java::lang::Iterable* val$files);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::Iterable* val$files = nullptr;
	::java::util::Iterator* iter = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$2_h_