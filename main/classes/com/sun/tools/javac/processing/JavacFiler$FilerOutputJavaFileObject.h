#ifndef _com_sun_tools_javac_processing_JavacFiler$FilerOutputJavaFileObject_h_
#define _com_sun_tools_javac_processing_JavacFiler$FilerOutputJavaFileObject_h_
//$ class com.sun.tools.javac.processing.JavacFiler$FilerOutputJavaFileObject
//$ extends com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject
//$ implements javax.tools.JavaFileObject

#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputFileObject.h>
#include <javax/tools/JavaFileObject.h>

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
				namespace processing {

class JavacFiler$FilerOutputJavaFileObject : public ::com::sun::tools::javac::processing::JavacFiler$FilerOutputFileObject, public ::javax::tools::JavaFileObject {
	$class(JavacFiler$FilerOutputJavaFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::processing::JavacFiler$FilerOutputFileObject, ::javax::tools::JavaFileObject)
public:
	JavacFiler$FilerOutputJavaFileObject();
	virtual $Object* clone() override;
	virtual bool delete$() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::processing::JavacFiler* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, $String* name, ::javax::tools::JavaFileObject* javaFileObject);
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
	::com::sun::tools::javac::processing::JavacFiler* this$0 = nullptr;
	::javax::tools::JavaFileObject* javaFileObject = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacFiler$FilerOutputJavaFileObject_h_