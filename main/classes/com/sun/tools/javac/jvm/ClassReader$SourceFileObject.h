#ifndef _com_sun_tools_javac_jvm_ClassReader$SourceFileObject_h_
#define _com_sun_tools_javac_jvm_ClassReader$SourceFileObject_h_
//$ class com.sun.tools.javac.jvm.ClassReader$SourceFileObject
//$ extends javax.tools.JavaFileObject

#include <javax/tools/JavaFileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
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
				namespace jvm {

class ClassReader$SourceFileObject : public ::javax::tools::JavaFileObject {
	$class(ClassReader$SourceFileObject, $NO_CLASS_INIT, ::javax::tools::JavaFileObject)
public:
	ClassReader$SourceFileObject();
	void init$(::com::sun::tools::javac::util::Name* name);
	virtual bool delete$() override;
	virtual bool equals(Object$* other) override;
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
	virtual int32_t hashCode() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	virtual ::java::net::URI* toUri() override;
	::com::sun::tools::javac::util::Name* name = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$SourceFileObject_h_