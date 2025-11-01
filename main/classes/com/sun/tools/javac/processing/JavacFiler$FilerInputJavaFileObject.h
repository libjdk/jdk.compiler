#ifndef _com_sun_tools_javac_processing_JavacFiler$FilerInputJavaFileObject_h_
#define _com_sun_tools_javac_processing_JavacFiler$FilerInputJavaFileObject_h_
//$ class com.sun.tools.javac.processing.JavacFiler$FilerInputJavaFileObject
//$ extends com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject
//$ implements javax.tools.JavaFileObject

#include <com/sun/tools/javac/processing/JavacFiler$FilerInputFileObject.h>
#include <javax/tools/JavaFileObject.h>

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

class JavacFiler$FilerInputJavaFileObject : public ::com::sun::tools::javac::processing::JavacFiler$FilerInputFileObject, public ::javax::tools::JavaFileObject {
	$class(JavacFiler$FilerInputJavaFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::processing::JavacFiler$FilerInputFileObject, ::javax::tools::JavaFileObject)
public:
	JavacFiler$FilerInputJavaFileObject();
	virtual $Object* clone() override;
	virtual bool delete$() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::CharSequence* getCharContent(bool arg0) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::processing::JavacFiler* this$0, ::javax::tools::JavaFileObject* javaFileObject);
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() override;
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool arg0) override;
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

#endif // _com_sun_tools_javac_processing_JavacFiler$FilerInputJavaFileObject_h_