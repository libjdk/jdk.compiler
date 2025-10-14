#ifndef _com_sun_tools_javac_processing_JavacFiler$FilerInputFileObject_h_
#define _com_sun_tools_javac_processing_JavacFiler$FilerInputFileObject_h_
//$ class com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject
//$ extends javax.tools.ForwardingFileObject

#include <javax/tools/ForwardingFileObject.h>

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
		class OutputStream;
		class Writer;
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

class JavacFiler$FilerInputFileObject : public ::javax::tools::ForwardingFileObject {
	$class(JavacFiler$FilerInputFileObject, $NO_CLASS_INIT, ::javax::tools::ForwardingFileObject)
public:
	JavacFiler$FilerInputFileObject();
	void init$(::com::sun::tools::javac::processing::JavacFiler* this$0, ::javax::tools::FileObject* fileObject);
	virtual bool delete$() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Writer* openWriter() override;
	::com::sun::tools::javac::processing::JavacFiler* this$0 = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacFiler$FilerInputFileObject_h_