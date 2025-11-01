#ifndef _com_sun_tools_javac_api_JavacTrees$HtmlFileObject_h_
#define _com_sun_tools_javac_api_JavacTrees$HtmlFileObject_h_
//$ class com.sun.tools.javac.api.JavacTrees$HtmlFileObject
//$ extends javax.tools.ForwardingFileObject
//$ implements javax.tools.JavaFileObject

#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileObject.h>

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
		class FileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$HtmlFileObject : public ::javax::tools::ForwardingFileObject, public ::javax::tools::JavaFileObject {
	$class(JavacTrees$HtmlFileObject, $NO_CLASS_INIT, ::javax::tools::ForwardingFileObject, ::javax::tools::JavaFileObject)
public:
	JavacTrees$HtmlFileObject();
	virtual $Object* clone() override;
	virtual bool delete$() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::CharSequence* getCharContent(bool arg0) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	void init$(::javax::tools::FileObject* fileObject);
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
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$HtmlFileObject_h_