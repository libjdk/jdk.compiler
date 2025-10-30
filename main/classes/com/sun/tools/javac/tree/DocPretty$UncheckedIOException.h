#ifndef _com_sun_tools_javac_tree_DocPretty$UncheckedIOException_h_
#define _com_sun_tools_javac_tree_DocPretty$UncheckedIOException_h_
//$ class com.sun.tools.javac.tree.DocPretty$UncheckedIOException
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

class DocPretty$UncheckedIOException : public ::java::lang::Error {
	$class(DocPretty$UncheckedIOException, $NO_CLASS_INIT, ::java::lang::Error)
public:
	DocPretty$UncheckedIOException();
	void init$(::java::io::IOException* e);
	static const int64_t serialVersionUID = (int64_t)0xC808FF5FDA719B51;
	DocPretty$UncheckedIOException(const DocPretty$UncheckedIOException& e);
	virtual void throw$() override;
	inline DocPretty$UncheckedIOException* operator ->() {
		return (DocPretty$UncheckedIOException*)throwing$;
	}
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DocPretty$UncheckedIOException_h_