#ifndef _com_sun_tools_javac_model_AnnotationProxyMaker_h_
#define _com_sun_tools_javac_model_AnnotationProxyMaker_h_
//$ class com.sun.tools.javac.model.AnnotationProxyMaker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Compound;
					class Symbol$MethodSymbol;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class $export AnnotationProxyMaker : public ::java::lang::Object {
	$class(AnnotationProxyMaker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnnotationProxyMaker();
	void init$(::com::sun::tools::javac::code::Attribute$Compound* anno, $Class* annoType);
	static ::java::lang::annotation::Annotation* generateAnnotation(::com::sun::tools::javac::code::Attribute$Compound* anno, $Class* annoType);
	::java::lang::annotation::Annotation* generateAnnotation();
	$Object* generateValue(::com::sun::tools::javac::code::Symbol$MethodSymbol* meth, ::com::sun::tools::javac::code::Attribute* attr);
	::java::util::Map* getAllReflectedValues();
	::java::util::Map* getAllValues();
	::com::sun::tools::javac::code::Attribute$Compound* anno = nullptr;
	$Class* annoType = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_AnnotationProxyMaker_h_