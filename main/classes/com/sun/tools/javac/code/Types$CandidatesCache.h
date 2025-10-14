#ifndef _com_sun_tools_javac_code_Types$CandidatesCache_h_
#define _com_sun_tools_javac_code_Types$CandidatesCache_h_
//$ class com.sun.tools.javac.code.Types$CandidatesCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Types;
					class Types$CandidatesCache$Entry;
				}
			}
		}
	}
}
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
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$CandidatesCache : public ::java::lang::Object {
	$class(Types$CandidatesCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$CandidatesCache();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual ::com::sun::tools::javac::util::List* get(::com::sun::tools::javac::code::Types$CandidatesCache$Entry* e);
	virtual void put(::com::sun::tools::javac::code::Types$CandidatesCache$Entry* e, ::com::sun::tools::javac::util::List* msymbols);
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::java::util::Map* cache = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$CandidatesCache_h_