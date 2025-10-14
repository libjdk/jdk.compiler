#ifndef _com_sun_tools_javac_processing_JavacFiler$FilerWriter_h_
#define _com_sun_tools_javac_processing_JavacFiler$FilerWriter_h_
//$ class com.sun.tools.javac.processing.JavacFiler$FilerWriter
//$ extends java.io.FilterWriter

#include <java/io/FilterWriter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ModuleSymbol;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacFiler;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class FileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacFiler$FilerWriter : public ::java::io::FilterWriter {
	$class(JavacFiler$FilerWriter, $NO_CLASS_INIT, ::java::io::FilterWriter)
public:
	JavacFiler$FilerWriter();
	void init$(::com::sun::tools::javac::processing::JavacFiler* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, $String* typeName, ::javax::tools::FileObject* fileObject);
	virtual void close() override;
	using ::java::io::FilterWriter::write;
	::com::sun::tools::javac::processing::JavacFiler* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod = nullptr;
	$String* typeName = nullptr;
	::javax::tools::FileObject* fileObject = nullptr;
	bool closed = false;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacFiler$FilerWriter_h_