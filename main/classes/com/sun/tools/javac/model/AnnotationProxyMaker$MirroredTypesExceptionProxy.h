#ifndef _com_sun_tools_javac_model_AnnotationProxyMaker$MirroredTypesExceptionProxy_h_
#define _com_sun_tools_javac_model_AnnotationProxyMaker$MirroredTypesExceptionProxy_h_
//$ class com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypesExceptionProxy
//$ extends sun.reflect.annotation.ExceptionProxy

#include <sun/reflect/annotation/ExceptionProxy.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class AnnotationProxyMaker$MirroredTypesExceptionProxy : public ::sun::reflect::annotation::ExceptionProxy {
	$class(AnnotationProxyMaker$MirroredTypesExceptionProxy, $NO_CLASS_INIT, ::sun::reflect::annotation::ExceptionProxy)
public:
	AnnotationProxyMaker$MirroredTypesExceptionProxy();
	void init$(::com::sun::tools::javac::util::List* ts);
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::RuntimeException* generateException() override;
	virtual int32_t hashCode() override;
	static $String* lambda$toString$0(::javax::lang::model::type::TypeMirror* t);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = 269;
	::com::sun::tools::javac::util::List* types = nullptr;
	$String* typeStrings = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_AnnotationProxyMaker$MirroredTypesExceptionProxy_h_