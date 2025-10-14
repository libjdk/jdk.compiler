#ifndef _com_sun_tools_javac_file_JavacFileManager$PathAndContainer_h_
#define _com_sun_tools_javac_file_JavacFileManager$PathAndContainer_h_
//$ class com.sun.tools.javac.file.JavacFileManager$PathAndContainer
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JavacFileManager$Container;
				}
			}
		}
	}
}
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

class JavacFileManager$PathAndContainer : public ::java::lang::Comparable {
	$class(JavacFileManager$PathAndContainer, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	JavacFileManager$PathAndContainer();
	void init$(::java::nio::file::Path* path, ::com::sun::tools::javac::file::JavacFileManager$Container* container, int32_t index);
	virtual int32_t compareTo(::com::sun::tools::javac::file::JavacFileManager$PathAndContainer* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::java::nio::file::Path* path = nullptr;
	::com::sun::tools::javac::file::JavacFileManager$Container* container = nullptr;
	int32_t index = 0;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$PathAndContainer_h_