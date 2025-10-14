#ifndef _com_sun_tools_javac_api_ClientCodeWrapper$WrappedFileObject_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper$WrappedFileObject_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject
//$ extends javax.tools.FileObject

#include <javax/tools/FileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class ClientCodeWrapper;
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
namespace java {
	namespace net {
		class URI;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export ClientCodeWrapper$WrappedFileObject : public ::javax::tools::FileObject {
	$class(ClientCodeWrapper$WrappedFileObject, $NO_CLASS_INIT, ::javax::tools::FileObject)
public:
	ClientCodeWrapper$WrappedFileObject();
	void init$(::com::sun::tools::javac::api::ClientCodeWrapper* this$0, ::javax::tools::FileObject* clientFileObject);
	virtual bool delete$() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	::com::sun::tools::javac::api::ClientCodeWrapper* this$0 = nullptr;
	::javax::tools::FileObject* clientFileObject = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper$WrappedFileObject_h_