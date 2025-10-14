#ifndef _com_sun_tools_sjavac_comp_PubAPIs_h_
#define _com_sun_tools_sjavac_comp_PubAPIs_h_
//$ class com.sun.tools.sjavac.comp.PubAPIs
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
					class Log;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PubAPIs : public ::java::lang::Object {
	$class(PubAPIs, 0, ::java::lang::Object)
public:
	PubAPIs();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::java::util::Map* getPubapis(::java::util::Collection* explicitJFOs, bool explicits);
	static ::com::sun::tools::sjavac::comp::PubAPIs* instance(::com::sun::tools::javac::util::Context* context);
	virtual void visitPubapi(::javax::lang::model::element::Element* e);
	static ::com::sun::tools::javac::util::Context$Key* pubApisKey;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::java::util::Map* publicApiPerClass = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_PubAPIs_h_