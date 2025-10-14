#ifndef _com_sun_tools_javac_model_AnnotationProxyMaker$MirroredTypeExceptionProxy_h_
#define _com_sun_tools_javac_model_AnnotationProxyMaker$MirroredTypeExceptionProxy_h_
//$ class com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypeExceptionProxy
//$ extends sun.reflect.annotation.ExceptionProxy

#include <sun/reflect/annotation/ExceptionProxy.h>

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

class AnnotationProxyMaker$MirroredTypeExceptionProxy : public ::sun::reflect::annotation::ExceptionProxy {
	$class(AnnotationProxyMaker$MirroredTypeExceptionProxy, $NO_CLASS_INIT, ::sun::reflect::annotation::ExceptionProxy)
public:
	AnnotationProxyMaker$MirroredTypeExceptionProxy();
	void init$(::javax::lang::model::type::TypeMirror* t);
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::RuntimeException* generateException() override;
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = 269;
	::javax::lang::model::type::TypeMirror* type = nullptr;
	$String* typeString = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_AnnotationProxyMaker$MirroredTypeExceptionProxy_h_