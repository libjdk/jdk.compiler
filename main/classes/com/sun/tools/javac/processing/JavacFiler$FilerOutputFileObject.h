#ifndef _com_sun_tools_javac_processing_JavacFiler$FilerOutputFileObject_h_
#define _com_sun_tools_javac_processing_JavacFiler$FilerOutputFileObject_h_
//$ class com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject
//$ extends javax.tools.ForwardingFileObject

#include <javax/tools/ForwardingFileObject.h>

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
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
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

class JavacFiler$FilerOutputFileObject : public ::javax::tools::ForwardingFileObject {
	$class(JavacFiler$FilerOutputFileObject, $NO_CLASS_INIT, ::javax::tools::ForwardingFileObject)
public:
	JavacFiler$FilerOutputFileObject();
	void init$(::com::sun::tools::javac::processing::JavacFiler* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, $String* name, ::javax::tools::FileObject* fileObject);
	virtual bool delete$() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	::com::sun::tools::javac::processing::JavacFiler* this$0 = nullptr;
	bool opened = false;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod = nullptr;
	$String* name = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacFiler$FilerOutputFileObject_h_