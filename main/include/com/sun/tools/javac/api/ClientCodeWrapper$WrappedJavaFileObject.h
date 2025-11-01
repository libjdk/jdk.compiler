#ifndef _com_sun_tools_javac_api_ClientCodeWrapper$WrappedJavaFileObject_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper$WrappedJavaFileObject_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileObject
//$ extends com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject
//$ implements javax.tools.JavaFileObject

#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedFileObject.h>
#include <javax/tools/JavaFileObject.h>

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
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Modifier;
				class NestingKind;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import ClientCodeWrapper$WrappedJavaFileObject : public ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedFileObject, public ::javax::tools::JavaFileObject {
	$class(ClientCodeWrapper$WrappedJavaFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedFileObject, ::javax::tools::JavaFileObject)
public:
	ClientCodeWrapper$WrappedJavaFileObject();
	virtual $Object* clone() override;
	virtual bool delete$() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::api::ClientCodeWrapper* this$0, ::javax::tools::JavaFileObject* clientJavaFileObject);
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() override;
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	::com::sun::tools::javac::api::ClientCodeWrapper* this$0 = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper$WrappedJavaFileObject_h_