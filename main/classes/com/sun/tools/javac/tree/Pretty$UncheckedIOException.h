#ifndef _com_sun_tools_javac_tree_Pretty$UncheckedIOException_h_
#define _com_sun_tools_javac_tree_Pretty$UncheckedIOException_h_
//$ class com.sun.tools.javac.tree.Pretty$UncheckedIOException
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace io {
		class IOException;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class Pretty$UncheckedIOException : public ::java::lang::Error {
	$class(Pretty$UncheckedIOException, $NO_CLASS_INIT, ::java::lang::Error)
public:
	Pretty$UncheckedIOException();
	void init$(::java::io::IOException* e);
	static const int64_t serialVersionUID = (int64_t)0xC808FF5FDA719B51;
	Pretty$UncheckedIOException(const Pretty$UncheckedIOException& e);
	virtual void throw$() override;
	inline Pretty$UncheckedIOException* operator ->() {
		return (Pretty$UncheckedIOException*)throwing$;
	}
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_Pretty$UncheckedIOException_h_