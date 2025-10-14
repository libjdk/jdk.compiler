#ifndef _com_sun_source_util_ParameterNameProvider_h_
#define _com_sun_source_util_ParameterNameProvider_h_
//$ interface com.sun.source.util.ParameterNameProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class VariableElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export ParameterNameProvider : public ::java::lang::Object {
	$interface(ParameterNameProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::CharSequence* getParameterName(::javax::lang::model::element::VariableElement* parameter) {return nullptr;}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_ParameterNameProvider_h_