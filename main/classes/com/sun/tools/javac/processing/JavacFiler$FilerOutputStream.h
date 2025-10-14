#ifndef _com_sun_tools_javac_processing_JavacFiler$FilerOutputStream_h_
#define _com_sun_tools_javac_processing_JavacFiler$FilerOutputStream_h_
//$ class com.sun.tools.javac.processing.JavacFiler$FilerOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

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

class JavacFiler$FilerOutputStream : public ::java::io::FilterOutputStream {
	$class(JavacFiler$FilerOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	JavacFiler$FilerOutputStream();
	void init$(::com::sun::tools::javac::processing::JavacFiler* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, $String* typeName, ::javax::tools::FileObject* fileObject);
	virtual void close() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
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

#endif // _com_sun_tools_javac_processing_JavacFiler$FilerOutputStream_h_