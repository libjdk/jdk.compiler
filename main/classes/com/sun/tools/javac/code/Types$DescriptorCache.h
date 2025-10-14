#ifndef _com_sun_tools_javac_code_Types$DescriptorCache_h_
#define _com_sun_tools_javac_code_Types$DescriptorCache_h_
//$ class com.sun.tools.javac.code.Types$DescriptorCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$CompoundScope;
					class Symbol;
					class Symbol$TypeSymbol;
					class Type;
					class Types;
					class Types$DescriptorCache$1;
					class Types$DescriptorCache$FunctionDescriptor;
					class Types$FunctionDescriptorLookupError;
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
					class JCDiagnostic;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class WeakHashMap;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$DescriptorCache : public ::java::lang::Object {
	$class(Types$DescriptorCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$DescriptorCache();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError* failure($String* msg, $ObjectArray* args);
	virtual ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError* failure(::com::sun::tools::javac::util::JCDiagnostic* diag);
	virtual ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor* findDescriptorInternal(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Scope$CompoundScope* membersCache);
	virtual ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor* get(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin);
	bool lambda$findDescriptorInternal$0(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol* msym);
	::com::sun::tools::javac::code::Type* lambda$findDescriptorInternal$1(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Symbol* msym);
	bool lambda$findDescriptorInternal$2(::com::sun::tools::javac::code::Type* mtype, ::com::sun::tools::javac::code::Type* abstractMType);
	::com::sun::tools::javac::code::Types$DescriptorCache$1* lambda$mergeDescriptors$3(::com::sun::tools::javac::code::Symbol* bestSoFar);
	::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor* mergeDescriptors(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::util::List* methodSyms);
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::java::util::WeakHashMap* _map = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DescriptorCache_h_