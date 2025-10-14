#ifndef _com_sun_tools_javac_model_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_h_
#define _com_sun_tools_javac_model_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_h_
//$ class com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy
//$ extends sun.reflect.annotation.ExceptionProxy

#include <sun/reflect/annotation/ExceptionProxy.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {
					class AnnotationProxyMaker$ValueVisitor;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy : public ::sun::reflect::annotation::ExceptionProxy {
	$class(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, $NO_CLASS_INIT, ::sun::reflect::annotation::ExceptionProxy)
public:
	AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy();
	void init$(::com::sun::tools::javac::model::AnnotationProxyMaker$ValueVisitor* this$1, ::java::lang::reflect::Method* method, ::com::sun::tools::javac::code::Attribute* val$attr);
	virtual ::java::lang::RuntimeException* generateException() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::model::AnnotationProxyMaker$ValueVisitor* this$1 = nullptr;
	::com::sun::tools::javac::code::Attribute* val$attr = nullptr;
	static const int64_t serialVersionUID = 269;
	::java::lang::reflect::Method* method = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_h_